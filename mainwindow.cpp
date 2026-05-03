#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QInputDialog>
#include <QTimer>
#include <QTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // MANDATORY REQUIREMENT: Enable table sorting on click
    ui->tableWidget->setSortingEnabled(true);

    // Forces the start page to the menu
    ui->stackedWidget->setCurrentIndex(0);



    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=](){
        ui->label_clock->setText(QTime::currentTime().toString("hh:mm:ss AP"));
    });
    timer->start(1000); // Updates every second

}

MainWindow::~MainWindow()
{
    delete ui;
}

// Helper function to refresh the table without asking for a password again
void MainWindow::refreshAdminTable()
{
    // Clear the table to prevent duplicate entries
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels({"ID", "Passenger Name", "Destination"});

    // Loop through your passenger lists and add them to the table
    for(int i = 0; i < passengerNames.size(); i++) {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);

        // Populate the columns
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(100 + i)));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(passengerNames[i]));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(passengerCities[i]));
    }
}

// 1. ADMIN PORTAL: Password protected access to the data table
void MainWindow::on_btn_admin_portal_clicked()
{
    bool ok;
    // ROLE-SENSITIVE: Uses password to gate access to the Admin Dashboard
    QString password = QInputDialog::getText(this, "Admin Access",
                                             "Enter Admin Password:",
                                             QLineEdit::Password,
                                             "", &ok);

    if (ok && password == "nust123") {
        qDebug() << "Access Granted. Switching to Admin Table";
        ui->stackedWidget->setCurrentIndex(1);
        refreshAdminTable();
    }
    else if (ok) {
        // MANDATORY REQUIREMENT: Show QMessageBox on error
        QMessageBox::critical(this, "Access Denied", "Incorrect Password!");
    }
}

// 2. MAIN MENU -> PASSENGER PORTAL
void MainWindow::on_btn_passenger_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

// 3. BOOKING FORM: Confirm/Book Button
void MainWindow::on_btn_bookTicket_clicked()
{
    // MANDATORY REQUIREMENT: Every form submit must be in a try-catch block
    try {
        QString name = ui->line_passengerName->text();
        QString city = ui->combo_destination->currentText();

        // VALIDATION: Throwing exceptions instead of using if/else alerts
        if(name.isEmpty()) {
            throw std::runtime_error("Passenger name cannot be empty!");
        }

        // Save data to lists (Note: These should ideally be in a Controller class)
        passengerNames.append(name);
        passengerCities.append(city);

        QMessageBox::information(this, "Success", "Ticket booked for " + name);

        ui->line_passengerName->clear();
        ui->stackedWidget->setCurrentIndex(0); // Return home after success

    } catch (const std::exception& e) {
        // MANDATORY REQUIREMENT: Display caught errors in a Critical Message Box
        QMessageBox::critical(this, "Booking Error", e.what());
    }
}

// 4. DELETE ACTION
void MainWindow::on_btn_delete_clicked()
{
    try {
        int currentRow = ui->tableWidget->currentRow();

        // Ensure a selection exists before trying to delete
        if (currentRow < 0) {
            throw std::runtime_error("Please select a passenger from the table first.");
        }

        // Remove from internal storage
        passengerNames.removeAt(currentRow);
        passengerCities.removeAt(currentRow);

        // Update the visual table
        refreshAdminTable();

        QMessageBox::information(this, "Updated", "Passenger removed successfully.");

    } catch (const std::exception& e) {
        QMessageBox::warning(this, "Selection Error", e.what());
    }
}

// 5. NAVIGATION (BACK BUTTONS)
void MainWindow::on_btnReturn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_btn_backFromPassenger_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_setRoute_clicked()
{
    // 1. Capture all three dimensions of the coordinate
    QString lat = ui->line_latitude->text();
    QString lon = ui->line_longitude->text();
    QString alt = ui->line_altitude->text(); // Grabbing the altitude here

    // 2. Validate that they aren't empty
    if(lat.isEmpty() || lon.isEmpty() || alt.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all GPS coordinates including Altitude.");
        return;
    }

    // 3. Display the full tracking data
    QString report = "--- GPS SYNC SUCCESSFUL ---\n"
                     "Latitude: " + lat + "\n"
                             "Longitude: " + lon + "\n"
                             "Altitude: " + alt + "m\n"
                             "Status: Route Verified";

    QMessageBox::information(this, "SmartTransit Tracking", report);
}

