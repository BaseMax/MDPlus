#ifndef SYNTAXHIGHLIGHTER_H
#define SYNTAXHIGHLIGHTER_H
#include <QString>
#include <QObject>

class SyntaxHighlighter
{
public:
    //SyntaxHighlighter();
//    explicit SyntaxHighlighter(QObject *parent = 0);
    QString analyse(QString source);
};

#endif // SYNTAXHIGHLIGHTER_H
