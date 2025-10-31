#ifndef ZOPILOMANNAMES_H
#define ZOPILOMANNAMES_H

#include <QWidget>
#include <QMessageBox>


namespace Ui {
class ZopilomanNames;
}

class ZopilomanNames : public QWidget
{
    Q_OBJECT

public:
    explicit ZopilomanNames(QWidget *parent = 0);
    ~ZopilomanNames();

    void openZopilomanGUI();



private:
    Ui::ZopilomanNames *ui;

QString name = "";
QString grado = "";
int edad = 0;

void generaGradoNombre();

private slots:

void muestraMensajeBienvenida();


};

#endif // ZOPILOMANNAMES_H
