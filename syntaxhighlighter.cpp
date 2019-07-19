#include "syntaxhighlighter.h"
#include <QString>
#include <QObject>
#include <QDebug>

//Q_INVOKABLE QString SyntaxHighlighter::replace(QString format, QString& source, void (*function)(QString &source, int seed, QRegExp regex))
//{
//    QRegExp reg(format);
//    reg.setMinimal(true);
//    int s = -1;
//    while((s = reg.indexIn(source, s+1))>=0){
////        function(source, s, reg);
//        source.replace(s, reg.cap(0).length(), reg.cap(1).toUpper());
//        s+= reg.cap(1).length();
//    }
//    return source;
//}

//QString SyntaxHighlighter::test(QString &source, int seed, QRegExp regex)
//{
//    source.replace(seed, regex.cap(0).length(), regex.cap(1).toLower());
//}

Q_INVOKABLE QString SyntaxHighlighter::analyse(QString source)
{
    int s;
    QRegExp reg;
    REPLACE("\\#\\#\\#\\#\\#( |)([^\n]+)", "<h5>"+reg.cap(2)+"</h5>", ("<h5>"+reg.cap(2)+"</h5>").length());
    REPLACE("\\#\\#\\#\\#( |)([^\n]+)", "<h4>"+reg.cap(2)+"</h4>", ("<h4>"+reg.cap(2)+"</h4>").length());
    REPLACE("\\#\\#\\#( |)([^\n]+)", "<h3>"+reg.cap(2)+"</h3>", ("<h3>"+reg.cap(2)+"</h3>").length());
    REPLACE("\\#\\#( |)([^\n]+)", "<h2>"+reg.cap(2)+"</h2>", ("<h2>"+reg.cap(2)+"</h2>").length());
    REPLACE("\\#( |)([^\n]+)", "<h1>"+reg.cap(2)+"</h1>", ("<h1>"+reg.cap(2)+"</h1>").length());
    REPLACE("([\n]{2,})", "<br>", 4);
    REPLACE("([\n])", " ", 1);
    source="<style>*{direction:rtl; text-align: right;}</style><body dir='rtl'>" + source + "</body>";
    return source;
}
