/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_clock;
    QPushButton *btn_passenger;
    QPushButton *btn_admin_portal;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QPushButton *btnReturn;
    QPushButton *btn_delete;
    QWidget *page_5;
    QLineEdit *line_passengerName;
    QComboBox *combo_destination;
    QPushButton *btn_bookTicket;
    QPushButton *btn_backFromPassenger;
    QLineEdit *line_latitude;
    QLineEdit *line_longitude;
    QLineEdit *line_altitude;
    QPushButton *setRoute;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(873, 628);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #1e1e1e; /* Dark Charcoal */\n"
"}\n"
"QLabel {\n"
"    color: #ff69b4; /* Hot Pink - high visibility */\n"
"    font-weight: bold;\n"
"}\n"
"QLineEdit {\n"
"    background-color: #2a2a2a;\n"
"    color: white;\n"
"    border: 1px solid #ff69b4; /* Pink border */\n"
"    border-radius: 4px;\n"
"}\n"
"QPushButton {\n"
"    background-color: #ff69b4;\n"
"    color: black;\n"
"    font-weight: bold;\n"
"    border-radius: 5px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setAutoFillBackground(false);
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(page);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);

        verticalLayout_3->addWidget(label);

        label_clock = new QLabel(page);
        label_clock->setObjectName("label_clock");
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_clock->setFont(font2);

        verticalLayout_3->addWidget(label_clock, 0, Qt::AlignmentFlag::AlignVCenter);

        btn_passenger = new QPushButton(page);
        btn_passenger->setObjectName("btn_passenger");
        QFont font3;
        font3.setBold(true);
        btn_passenger->setFont(font3);
        btn_passenger->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ff69b4;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 15px;\n"
"    border: none;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #ff1493; /* Deeper pink on hover */\n"
"}"));

        verticalLayout_3->addWidget(btn_passenger);

        btn_admin_portal = new QPushButton(page);
        btn_admin_portal->setObjectName("btn_admin_portal");
        btn_admin_portal->setFont(font3);
        btn_admin_portal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ff69b4;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 15px;\n"
"    border: none;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #ff1493; /* Deeper pink on hover */\n"
"}"));

        verticalLayout_3->addWidget(btn_admin_portal);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(page_2);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        btnReturn = new QPushButton(page_2);
        btnReturn->setObjectName("btnReturn");

        verticalLayout->addWidget(btnReturn);

        btn_delete = new QPushButton(page_2);
        btn_delete->setObjectName("btn_delete");

        verticalLayout->addWidget(btn_delete);

        stackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        line_passengerName = new QLineEdit(page_5);
        line_passengerName->setObjectName("line_passengerName");
        line_passengerName->setGeometry(QRect(210, 150, 311, 31));
        combo_destination = new QComboBox(page_5);
        combo_destination->addItem(QString());
        combo_destination->addItem(QString());
        combo_destination->addItem(QString());
        combo_destination->setObjectName("combo_destination");
        combo_destination->setGeometry(QRect(220, 220, 251, 31));
        btn_bookTicket = new QPushButton(page_5);
        btn_bookTicket->setObjectName("btn_bookTicket");
        btn_bookTicket->setGeometry(QRect(250, 440, 221, 31));
        btn_backFromPassenger = new QPushButton(page_5);
        btn_backFromPassenger->setObjectName("btn_backFromPassenger");
        btn_backFromPassenger->setGeometry(QRect(490, 470, 90, 29));
        line_latitude = new QLineEdit(page_5);
        line_latitude->setObjectName("line_latitude");
        line_latitude->setGeometry(QRect(30, 350, 131, 31));
        line_longitude = new QLineEdit(page_5);
        line_longitude->setObjectName("line_longitude");
        line_longitude->setGeometry(QRect(230, 350, 141, 31));
        line_altitude = new QLineEdit(page_5);
        line_altitude->setObjectName("line_altitude");
        line_altitude->setGeometry(QRect(420, 350, 113, 28));
        setRoute = new QPushButton(page_5);
        setRoute->setObjectName("setRoute");
        setRoute->setGeometry(QRect(230, 280, 231, 31));
        stackedWidget->addWidget(page_5);

        verticalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 873, 41));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "                            SMART TRANSIT SYSTEM", nullptr));
        label_clock->setText(QCoreApplication::translate("MainWindow", "                                                                                             TextLabel", nullptr));
        btn_passenger->setText(QCoreApplication::translate("MainWindow", "Passenger Portal", nullptr));
        btn_admin_portal->setText(QCoreApplication::translate("MainWindow", "Admin Dashboard.", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Role", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Region", nullptr));
        btnReturn->setText(QCoreApplication::translate("MainWindow", "Back to Menu", nullptr));
        btn_delete->setText(QCoreApplication::translate("MainWindow", "Delete Passanger", nullptr));
        line_passengerName->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Passenger Name", nullptr));
        combo_destination->setItemText(0, QCoreApplication::translate("MainWindow", "Quetta", nullptr));
        combo_destination->setItemText(1, QCoreApplication::translate("MainWindow", "Islamabad", nullptr));
        combo_destination->setItemText(2, QCoreApplication::translate("MainWindow", "Karachi", nullptr));

        btn_bookTicket->setText(QCoreApplication::translate("MainWindow", "Confirm booking", nullptr));
        btn_backFromPassenger->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        line_latitude->setText(QString());
        line_latitude->setPlaceholderText(QCoreApplication::translate("MainWindow", " Latitude", nullptr));
        line_longitude->setText(QString());
        line_longitude->setPlaceholderText(QCoreApplication::translate("MainWindow", "Longitude", nullptr));
        line_altitude->setText(QString());
        line_altitude->setPlaceholderText(QCoreApplication::translate("MainWindow", "Altitude", nullptr));
        setRoute->setText(QCoreApplication::translate("MainWindow", "set route", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
