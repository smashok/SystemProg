#include "filereaderwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setNewly_used(std::vector<TextFileReader>());
    for(TextFileReader tfr : getNewly_used()){
        ui->listWidget->addItem(tfr.getPath());
    }
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(Find()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(Open()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::vector<TextFileReader> MainWindow::getNewly_used() const
{
    return newly_used;
}

void MainWindow::setNewly_used(const std::vector<TextFileReader> &value)
{
    newly_used = value;
}

void MainWindow::Find(){
     QString path = QFileDialog::getOpenFileName(this, "Open File", "C:", "Text files(*.txt);;All files (*.*)");
     TextFileReader tfr;
     if(!path.isEmpty())
     {
     tfr.setPath(path);
     QFile myFile(path);
     if (myFile.open(QIODevice::ReadOnly | QIODevice::Text))
     {
         QTextStream in(&myFile);
         QString main_string;
         while (!in.atEnd())
         {
          QString line = in.readLine();
          main_string.append(line);
          main_string.push_back("\n");
          }
     tfr.setText(main_string);
     ui->listWidget->addItem(tfr.getPath());
     FileReaderWindow* tw = new FileReaderWindow(tfr);
     tw->show();
     std::vector<TextFileReader> newly_used= getNewly_used();
     newly_used.push_back(tfr);
     setNewly_used(newly_used);
     myFile.close();
     }
     }
}

void MainWindow::Open(){
    TextFileReader f = getNewly_used().at(ui->listWidget->currentIndex().row());
    FileReaderWindow* tw = new FileReaderWindow(f);
    tw->show();
}

