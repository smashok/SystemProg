#include "filereaderwindow.h"
#include "ui_filereaderwindow.h"

FileReaderWindow::FileReaderWindow(TextFileReader tfr, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FileReaderWindow)
{

    ui->setupUi(this);
    ui->label->setText(tfr.getPath());
    QLabel* label = new QLabel;
    label->setText(tfr.getText());
    ui->scrollArea->setBackgroundRole(QPalette::Dark);
    ui->scrollArea->setWidget(label);
}

FileReaderWindow::~FileReaderWindow()
{
    delete ui;
}
