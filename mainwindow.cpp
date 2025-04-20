#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox_choice_model->addItems({"FCN", "DeepLabV3+", "U-Net"});
    ui->comboBox_morphologic_operations->addItems({"Нет", "Сглаживание артефактов", "Удаление шума", "Сглаживание и удаление шума"});
    ui->comboBox_pick_on_picture->addItems({"Все объекты", "Только лес", "Только дороги", "Только здания"});
}

MainWindow::~MainWindow()
{
    delete ui;
}

