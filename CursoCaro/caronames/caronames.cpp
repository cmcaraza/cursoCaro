#include "caronames.h"
#include "ui_caronames.h"

caronames::caronames(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::caronames)
{
    ui->setupUi(this);
    connect(ui->pb_caroname,SIGNAL(clicked(bool)),this,SLOT(muestramensajebienveida()));

}

caronames::~caronames()
{
    delete ui;
}

void caronames::opencaronames()
{
    show();
}

void caronames::generaGradoNombre()
{
    name = ui->le_caronamenomre->text();
    grado = ui->caronamegrado->text();

    QString mensaje = "";
    mensaje.append("Bienvenido: ").append("\n").append(name);

    QMessageBox mbx;
    mbx.setText(mensaje);
    mbx.exec();
}

void caronames::muestramensajebienveida()
{
    generaGradoNombre();
}
