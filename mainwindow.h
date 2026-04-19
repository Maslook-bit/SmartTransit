#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "TransitManager.h" // Keep your includes at the top

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
    void on_pushButton_2_clicked(); // This links to your Admin button

private:
    Ui::MainWindow *ui;
    TransitManager system; // Now 'system' is safely inside the class!
};

#endif // MAINWINDOW_H