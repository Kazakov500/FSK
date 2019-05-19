/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *main_H_Layout;
    QVBoxLayout *main_V_layout;
    QGroupBox *gb_Digital_Params;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_GenerateDigitalSignal;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_StepsOnBit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_Periods;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_DtoA;
    QPushButton *btn_AtoD;
    QGroupBox *gb_Analog_Params;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_bits;
    QPushButton *btn_GenerateAnalog;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *ChartsLayout;
    QWidget *DigitalSignalChart;
    QWidget *AnalogSifnalChart;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1038, 551);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        main_H_Layout = new QHBoxLayout();
        main_H_Layout->setSpacing(6);
        main_H_Layout->setObjectName(QString::fromUtf8("main_H_Layout"));
        main_V_layout = new QVBoxLayout();
        main_V_layout->setSpacing(6);
        main_V_layout->setObjectName(QString::fromUtf8("main_V_layout"));
        gb_Digital_Params = new QGroupBox(centralWidget);
        gb_Digital_Params->setObjectName(QString::fromUtf8("gb_Digital_Params"));
        horizontalLayout_2 = new QHBoxLayout(gb_Digital_Params);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_GenerateDigitalSignal = new QPushButton(gb_Digital_Params);
        btn_GenerateDigitalSignal->setObjectName(QString::fromUtf8("btn_GenerateDigitalSignal"));
        btn_GenerateDigitalSignal->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(btn_GenerateDigitalSignal);


        main_V_layout->addWidget(gb_Digital_Params);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit_StepsOnBit = new QLineEdit(centralWidget);
        lineEdit_StepsOnBit->setObjectName(QString::fromUtf8("lineEdit_StepsOnBit"));

        horizontalLayout_3->addWidget(lineEdit_StepsOnBit);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        main_V_layout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        lineEdit_Periods = new QLineEdit(centralWidget);
        lineEdit_Periods->setObjectName(QString::fromUtf8("lineEdit_Periods"));

        horizontalLayout_4->addWidget(lineEdit_Periods);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        main_V_layout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_DtoA = new QPushButton(centralWidget);
        btn_DtoA->setObjectName(QString::fromUtf8("btn_DtoA"));

        horizontalLayout->addWidget(btn_DtoA);

        btn_AtoD = new QPushButton(centralWidget);
        btn_AtoD->setObjectName(QString::fromUtf8("btn_AtoD"));

        horizontalLayout->addWidget(btn_AtoD);


        main_V_layout->addLayout(horizontalLayout);

        gb_Analog_Params = new QGroupBox(centralWidget);
        gb_Analog_Params->setObjectName(QString::fromUtf8("gb_Analog_Params"));
        gridLayout_3 = new QGridLayout(gb_Analog_Params);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(gb_Analog_Params);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        lineEdit_bits = new QLineEdit(gb_Analog_Params);
        lineEdit_bits->setObjectName(QString::fromUtf8("lineEdit_bits"));

        horizontalLayout_5->addWidget(lineEdit_bits);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        gridLayout_3->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        btn_GenerateAnalog = new QPushButton(gb_Analog_Params);
        btn_GenerateAnalog->setObjectName(QString::fromUtf8("btn_GenerateAnalog"));

        gridLayout_3->addWidget(btn_GenerateAnalog, 0, 0, 1, 1);


        main_V_layout->addWidget(gb_Analog_Params);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));

        main_V_layout->addLayout(horizontalLayout_6);

        main_V_layout->setStretch(0, 1);
        main_V_layout->setStretch(1, 1);
        main_V_layout->setStretch(2, 1);
        main_V_layout->setStretch(3, 1);
        main_V_layout->setStretch(4, 1);
        main_V_layout->setStretch(5, 5);

        main_H_Layout->addLayout(main_V_layout);

        ChartsLayout = new QVBoxLayout();
        ChartsLayout->setSpacing(6);
        ChartsLayout->setObjectName(QString::fromUtf8("ChartsLayout"));
        DigitalSignalChart = new QWidget(centralWidget);
        DigitalSignalChart->setObjectName(QString::fromUtf8("DigitalSignalChart"));
        DigitalSignalChart->setMinimumSize(QSize(300, 0));

        ChartsLayout->addWidget(DigitalSignalChart);

        AnalogSifnalChart = new QWidget(centralWidget);
        AnalogSifnalChart->setObjectName(QString::fromUtf8("AnalogSifnalChart"));
        AnalogSifnalChart->setMinimumSize(QSize(300, 0));

        ChartsLayout->addWidget(AnalogSifnalChart);


        main_H_Layout->addLayout(ChartsLayout);

        main_H_Layout->setStretch(0, 10);
        main_H_Layout->setStretch(1, 20);

        gridLayout->addLayout(main_H_Layout, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1038, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        gb_Digital_Params->setTitle(QApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264\320\275\320\276\320\271 \321\201\320\270\320\263\320\275\320\260\320\273 (\321\206\320\270\321\204\321\200)", nullptr));
        btn_GenerateDigitalSignal->setText(QApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\320\275\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label->setText(QApplication::translate("MainWindow", "Steps on bit", nullptr));
        lineEdit_StepsOnBit->setText(QApplication::translate("MainWindow", "100", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Periods", nullptr));
        lineEdit_Periods->setText(QApplication::translate("MainWindow", "1", nullptr));
        btn_DtoA->setText(QApplication::translate("MainWindow", "\342\206\223", nullptr));
        btn_AtoD->setText(QApplication::translate("MainWindow", "\342\206\221", nullptr));
        gb_Analog_Params->setTitle(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264\320\275\320\276\320\271 \321\201\320\270\320\263\320\275\320\260\320\273 (\320\260\320\275\320\260\320\273\320\276\320\263)", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Bits", nullptr));
        lineEdit_bits->setText(QApplication::translate("MainWindow", "5", nullptr));
        btn_GenerateAnalog->setText(QApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
