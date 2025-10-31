#include "zopilomannames.h"
#include "ui_zopilomannames.h"

ZopilomanNames::ZopilomanNames(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZopilomanNames)
{
    ui->setupUi(this);

    connect(ui->pb_zopilomanname_enviar,SIGNAL(clicked(bool)),this,SLOT(muestraMensajeBienvenida()));
}

ZopilomanNames::~ZopilomanNames()
{
    delete ui;
}

void ZopilomanNames::openZopilomanGUI()
{

show();


}

void ZopilomanNames::generaGradoNombre()
{
    name = ui->le_zopilomanname_name->text();
    grado = ui->le_zopilomanname_grado->text();

    QString mensaje = "";

    mensaje.append("Bienvenido: ").append("\n").append(grado).append(" ").append(name);



    QMessageBox mbx;
    mbx.setText(mensaje);
    mbx.exec();

}

void ZopilomanNames::muestraMensajeBienvenida()
{
    generaGradoNombre();
}
