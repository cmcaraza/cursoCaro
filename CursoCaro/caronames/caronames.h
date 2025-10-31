#ifndef CARONAMES_H
#define CARONAMES_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class caronames;
}

class caronames : public QWidget
{
    Q_OBJECT

public:
    explicit caronames(QWidget *parent = 0);
    ~caronames();
    void opencaronames();

private:
    Ui::caronames *ui;

    QString name = "";
    QString grado = "";
    int edad = 0;

    void generaGradoNombre();
private slots:
    void muestramensajebienveida();
};

#endif // CARONAMES_H
