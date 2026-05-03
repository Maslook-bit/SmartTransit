#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "TransitManager.h" // Logic controller for SmartTransit



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    /*
     * NAVIGATION SLOTS
     * These handle switching between pages in your QStackedWidget
     */
    void on_btn_admin_portal_clicked();       // Gated by password for Admin role
    void on_btnReturn_clicked();              // Return to Main Menu from Admin
    void on_btn_passenger_clicked();          // Open Booking Form
    void on_btn_backFromPassenger_clicked();  // Return to Main Menu from Booking

    /*
     * ACTION SLOTS
     * These must contain try-catch blocks per NUST Project Specs
     */
    void on_btn_bookTicket_clicked();         // Submits data to the lists
    void on_btn_delete_clicked();             // Removes selected row from table

    void on_setRoute_clicked();

private:
    Ui::MainWindow *ui;

    QTimer *timer;

    // The core logic class (Composition)
    TransitManager system;
  // Added to manage the vehicles we made
    /*
     * HELPER FUNCTIONS
     * This declaration fixes the "not declared in this scope" error.
     * It allows us to reuse the table-filling code without re-entering passwords.
     */
    void refreshAdminTable();

    /*
     * INTERNAL DATA STORAGE
     * In a full implementation, these would move into your Controller classes.
     */
    QStringList passengerNames;    // Stores the 'Name' column data
    QStringList passengerCities;   // Stores the 'Region' column data
};

#endif // MAINWINDOW_H