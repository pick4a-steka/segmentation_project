#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>

void load_styles(QApplication &a) {
    QFile file = QFile(":/style/style.qss");

    if (file.open(QIODevice::ReadOnly)) {
        QTextStream stream = QTextStream(&file); // не принимает параметр QFile
        a.setStyleSheet(stream.readAll());
        file.close();
    }
    else {
        qDebug() << "Ошибка: файл не открылся";
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    load_styles(a);
    MainWindow w;
    w.show();
    return a.exec();
}
