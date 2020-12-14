#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "geotransform.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionGeoTransform_triggered(); 

private:
    Ui::MainWindow *ui;
    
     GeoTransform *Geotransform_open;
    
};

#endif // MAINWINDOW_H
