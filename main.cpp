#include "mainwindow.h"
#include <QApplication>

// Include these to seed initial data
#include "CityBus.h"
#include "CustomDate.h"
#include "GeoCoordinate.h"

int main(int argc, char *argv[])
{
    // 1. Initialize the Qt Application
    QApplication a(argc, argv);

    // 2. Create the Main Window
    MainWindow w;



    // 4. Display the GUI
    w.show();

    // 5. Start the event loop
    return a.exec();
}