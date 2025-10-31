#include "mainwindow.h"
#include <QApplication>
#include "zopilomanNames/zopilomannames.h"
#include "caronames/caronames.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   // MainWindow w;
   // w.show();
   ZopilomanNames zpm;
   zpm.openZopilomanGUI();

    caronames cn;
    cn.opencaronames();


    return a.exec();
}
