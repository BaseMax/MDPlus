#include "syntaxhighlighter.h"
#include <QString>
#include <QObject>

Q_INVOKABLE QString SyntaxHighlighter::analyse(QString source)
{
    source.replace("\n", "<br>");
    return source;
}
