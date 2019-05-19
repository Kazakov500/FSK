#include "mainwindow.h"
#include "ui_mainwindow.h"



using namespace QtCharts;




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);




    //----------DigitalSignal
    chart_DigitalSignal->addSeries(series_DigitalSignal);
    chart_DigitalSignal->setTitle("QT Charts example");

    //add axis to the chart

    axisX_DigitalSignal->setLabelFormat("%i");
    axisX_DigitalSignal->setTitleText("Step");
    chart_DigitalSignal->addAxis(axisX_DigitalSignal, Qt::AlignBottom);
    series_DigitalSignal->attachAxis(axisX_DigitalSignal);


    axisY_DigitalSignal->setLabelFormat("%f");
    axisY_DigitalSignal->setTitleText("Value");
    chart_DigitalSignal->addAxis(axisY_DigitalSignal, Qt::AlignLeft);
    series_DigitalSignal->attachAxis(axisY_DigitalSignal);

    QChartView *chartView_DigitalSignal = new QChartView(chart_DigitalSignal);
    chartView_DigitalSignal->setRenderHint(QPainter::Antialiasing);
    //ui->gridLayout_3->addWidget(chartView, 0,0);
    ui->ChartsLayout->addWidget(chartView_DigitalSignal, 0, 0);







    //----------AnalogSignal

    chart_AnalogSignal->addSeries(series_AnalogSignal);
    chart_AnalogSignal->setTitle("QT Charts example");

    //add axis to the chart
    axisX_AnalogSignal->setLabelFormat("%i");
    axisX_AnalogSignal->setTitleText("Step");
    chart_AnalogSignal->addAxis(axisX_AnalogSignal, Qt::AlignBottom);
    series_AnalogSignal->attachAxis(axisX_AnalogSignal);


    axisY_AnalogSignal->setLabelFormat("%f");
    axisY_AnalogSignal->setTitleText("Value");
    chart_AnalogSignal->addAxis(axisY_AnalogSignal, Qt::AlignLeft);
    series_AnalogSignal->attachAxis(axisY_AnalogSignal);

    QChartView *chartView_AnalogSignal= new QChartView(chart_AnalogSignal);
    chartView_AnalogSignal->setRenderHint(QPainter::Antialiasing);
    ui->ChartsLayout->addWidget(chartView_AnalogSignal, 0, 0);


    srand(time(NULL));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_btn_GenerateDigitalSignal_clicked()
{
    int bits = ui->lineEdit_bits->text().toInt();
    int i = 0;
    //int bit_staps = 10;
    Input_Data.clear();
    for(int i = 0; i<bits; i++)
        Input_Data.append(qrand() % 2);
    //qDebug() << Input_Data;

    series_DigitalSignal->clear();
    foreach(auto bit, Input_Data )
    {
        series_DigitalSignal->append(i++, bit);
        series_DigitalSignal->append(i, bit);
    }

    chart_DigitalSignal->removeSeries(series_DigitalSignal);
    chart_DigitalSignal->addSeries(series_DigitalSignal);

}

void MainWindow::on_btn_GenerateAnalog_clicked()
{

    QList<float> buff_sin;
    //int steps_on_bit = 2*3.1415*50;


    int steps = ui->lineEdit_StepsOnBit->text().toInt();//ui->//300;
    float len = 2*3.1415 * ui->lineEdit_Periods->text().toFloat();
    float step = len/(float)steps;

    Input_Data.clear();
    Output_Data.clear();




    int bits = ui->lineEdit_bits->text().toInt();
    int i = 0;
    for(i = 0; i<bits; i++)
        Input_Data.append(qrand() % 2);


    //int current_f = 100;
    //int f1 = 1000;
    //int f2 = 10000;

    Output_Data.clear();

    foreach(auto step_data, Input_Data )
    {
        buff_sin.clear();
        if (step_data == 0 )
        {
            for(float i=0; i<=len; i+=step)
            {
                buff_sin.append(sin(i));
            }
            //while ()
        } else if (step_data == 1)
        {
            for(float i=0; i<=len*10; i+=step*10)
            {
                buff_sin.append(sin(i));
            }
        }
        Output_Data.append(buff_sin);
    }


    series_AnalogSignal->clear();
    i = 0;
    foreach(auto bit, Output_Data )
    {
        series_AnalogSignal->append(i++, bit);
        series_AnalogSignal->append(i, bit);
    }

    chart_AnalogSignal->removeSeries(series_AnalogSignal);
    chart_AnalogSignal->addSeries(series_AnalogSignal);

    /*



    Input_Data.append(1);
    Input_Data.append(0);
    Input_Data.append(1);
    Input_Data.append(0);

    int current_f = 100;
    int f1 = 100;
    int f2 = 1000;

    foreach(auto step, Input_Data )
    {
        buff_sin.clear();
        if (step == 0 )
        {
            for(int i=0; i<steps_on_bit; i++)
            {
                buff_sin.append(sin(2*3.1415*f1*i));
            }
            //while ()
        } else if (step == 1)
        {
            for(int i=0; i<steps_on_bit; i++)
            {
                buff_sin.append(sin(2*3.1415*f2*i));
            }
        }
        Output_Data.append(buff_sin);
    }


    series_AnalogSignal->clear();
    int i = 0;
    foreach(auto bit, Output_Data )
    {
        series_AnalogSignal->append(i++, bit);
        series_AnalogSignal->append(i, bit);
    }

    chart_AnalogSignal->removeSeries(series_AnalogSignal);
    chart_AnalogSignal->addSeries(series_AnalogSignal);

    */

}

void MainWindow::on_btn_DtoA_clicked()
{
    QList<float> buff_sin;
    int steps_on_bit = 2*3.1415*50;

    int steps = ui->lineEdit_StepsOnBit->text().toInt();//ui->//300;
    float len = 2*3.1415 * ui->lineEdit_Periods->text().toFloat();
    float step = len/(float)steps;


    //int current_f = 100;
    //int f1 = 1000;
    //int f2 = 10000;

    Output_Data.clear();

    foreach(auto step_data, Input_Data )
    {
        buff_sin.clear();
        if (step_data == 0 )
        {
            for(float i=0; i<=len; i+=step)
            {
                buff_sin.append(sin(i));
            }
            //while ()
        } else if (step_data == 1)
        {
            for(float i=0; i<=len*10; i+=step*10)
            {
                buff_sin.append(sin(i));
            }
        }
        Output_Data.append(buff_sin);
    }


    series_AnalogSignal->clear();
    int i = 0;
    foreach(auto bit, Output_Data )
    {
        series_AnalogSignal->append(i++, bit);
        series_AnalogSignal->append(i, bit);
    }

    chart_AnalogSignal->removeSeries(series_AnalogSignal);
    chart_AnalogSignal->addSeries(series_AnalogSignal);

}

void MainWindow::on_btn_AtoD_clicked()
{
    QList<float> sin_0;
    //QList<float> sin_1;

    int bits = ui->lineEdit_bits->text().toInt();
    int steps = ui->lineEdit_StepsOnBit->text().toInt();//ui->//300;
    float len = 2*3.1415 * ui->lineEdit_Periods->text().toFloat();
    float step = len/(float)steps;

    for(float i=0; i<=len; i+=step)
    {
        sin_0.append(sin(i));
    }

    QList<float> ConvertedSig;

    for(int i = 0; i < bits; i++)
    {
        int sum = 0;
        for(int j=0; j<steps; j++)
        {
            sum += sin_0[j] + Output_Data[i*steps + j];
        }
        ConvertedSig.append(sum);
    }

    float sum = std::accumulate(ConvertedSig.begin(), ConvertedSig.end(), 0.0);
    float mean = sum / ConvertedSig.size();


    qDebug() << "SUM arr: " << ConvertedSig;
    qDebug() << "mean: " << mean;

    Input_Data.clear();

    foreach(auto bit, ConvertedSig )
    {
        if(bit < mean)
            Input_Data.append(0);
        else
            Input_Data.append(1);

    }

    series_DigitalSignal->clear();
    int i = 0;
    foreach(auto bit, Input_Data )
    {
        series_DigitalSignal->append(i++, bit);
        series_DigitalSignal->append(i, bit);
    }

    chart_DigitalSignal->removeSeries(series_DigitalSignal);
    chart_DigitalSignal->addSeries(series_DigitalSignal);



}
