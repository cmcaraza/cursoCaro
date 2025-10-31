#include "mainwindow.h"
#include <QApplication>
#include "zopilomanNames/zopilomannames.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
   // w.show();
   ZopilomanNames zpm;
   zpm.openZopilomanGUI();


    return a.exec();
}
