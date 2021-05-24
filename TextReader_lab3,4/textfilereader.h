#ifndef TEXTFILEREADER_H
#define TEXTFILEREADER_H

#include <QString>



class TextFileReader
{
public:
    TextFileReader();

    QString getText() const;
    void setText(const QString &value);
    QString getPath() const;
    void setPath(const QString &value);

private:
    QString text;
    QString path;
};

#endif // TEXTFILEREADER_H
