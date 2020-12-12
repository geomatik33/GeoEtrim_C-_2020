#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "canvasnew.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void setnodeadd(QString file_name);

private slots:

    void resizeEvent(QResizeEvent*);
    void on_action_new_triggered();



    void on_actionOpen_Project_triggered();

private:
    Ui::MainWindow *ui;
    canvasnew canvas;
    QString m_value;
};
#endif // MAINWINDOW_H
