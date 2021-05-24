#include "textfilereader.h"

TextFileReader::TextFileReader()
{

}

QString TextFileReader::getText() const
{
    return text;
}

void TextFileReader::setText(const QString &value)
{
    text = value;
}

QString TextFileReader::getPath() const
{
    return path;
}

void TextFileReader::setPath(const QString &value)
{
    path = value;
}
