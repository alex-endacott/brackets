#ifndef BRACKETS_H
#define BRACKETS_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>

namespace Ui {
class Brackets;
}

class Brackets : public QMainWindow
{
    Q_OBJECT

public:
    explicit Brackets(QWidget *parent = nullptr);
    ~Brackets();

private slots:
    void on_actionOpen_triggered();

private:
    Ui::Brackets *ui;
    QString currentFile = "";
};

#endif // BRACKETS_H
