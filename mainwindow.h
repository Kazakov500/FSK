#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCoreApplication>
#include <QDateTime>
#include <iostream>
#include <QDebug>
#include <QtMath>
#include <QtCharts/QtCharts>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QList<int> Input_Data;
    QList<float> Output_Data;
    int analog_bit_steps = 0;

    //----------DigitalSignal

    QChart *chart_DigitalSignal = new QChart();
    QLineSeries *series_DigitalSignal = new QLineSeries();
    QValueAxis *axisX_DigitalSignal = new QValueAxis;
    QValueAxis *axisY_DigitalSignal = new QValueAxis;

    //----------AnalogSignal

    QChart *chart_AnalogSignal = new QChart();
    QLineSeries *series_AnalogSignal = new QLineSeries();
    QValueAxis *axisX_AnalogSignal = new QValueAxis;
    QValueAxis *axisY_AnalogSignal = new QValueAxis;

private slots:
    void on_pushButton_clicked();

    void on_btn_GenerateDigitalSignal_clicked();

    void on_btn_GenerateAnalog_clicked();

    void on_btn_DtoA_clicked();

    void on_btn_AtoD_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
