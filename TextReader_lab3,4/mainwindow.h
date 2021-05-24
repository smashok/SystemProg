#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "textfilereader.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    std::vector<TextFileReader> getNewly_used() const;
    void setNewly_used(const std::vector<TextFileReader> &value);

private slots:
    void Find();
    void Open();


private:
    Ui::MainWindow *ui;
    std::vector<TextFileReader> newly_used;
};
#endif // MAINWINDOW_H
