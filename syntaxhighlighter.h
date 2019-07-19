#ifndef SYNTAXHIGHLIGHTER_H
#define SYNTAXHIGHLIGHTER_H
#include <QString>
#include <QObject>

class SyntaxHighlighter : public QObject
{
  Q_OBJECT
public:
    Q_INVOKABLE QString analyse(QString source);
};

#endif // SYNTAXHIGHLIGHTER_H
