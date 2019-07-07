#include "brackets.h"
#include "ui_brackets.h"

Brackets::Brackets(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Brackets)
{
    ui->setupUi(this);
}

Brackets::~Brackets()
{
    delete ui;
}

void Brackets::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open");
    QFile file(filename);
    currentFile = filename;
}
