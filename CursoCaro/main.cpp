#include "mainwindow.h"
#include <QApplication>
#include "caronames/caronames.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    caronames cn;
    cn.opencaronames();

    return a.exec();
}
