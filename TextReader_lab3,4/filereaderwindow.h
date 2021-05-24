#ifndef FILEREADERWINDOW_H
#define FILEREADERWINDOW_H

#include "textfilereader.h"

#include <QWidget>

namespace Ui {
class FileReaderWindow;
}

class FileReaderWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FileReaderWindow(TextFileReader tfr, QWidget *parent = nullptr);
    ~FileReaderWindow();

private:
    Ui::FileReaderWindow *ui;
};

#endif // FILEREADERWINDOW_H
