#ifndef SYNTAXHIGHLIGHTER_H
#define SYNTAXHIGHLIGHTER_H
#include <QString>
#include <QObject>

#define REPLACE(format, rep, len)\
    reg=QRegExp(format);\
    s = -1;\
    while((s = reg.indexIn(source, s+1))>=0){\
        source.replace(s, reg.cap(0).length(), rep);\
        s+= len;\
    }\

//    reg.setMinimal(true);\
//    source.replace(reg, rep);

//#define REPLACE(format, rep, len)\
//    reg=QRegExp(format);\
//    reg.setMinimal(true);\
//    s = -1;\
//    while((s = reg.indexIn(source, s+1))>=0){\
//        source.replace(s, reg.cap(0).length(), rep);\
//        s+= len;\
//    }

class SyntaxHighlighter : public QObject
{
  Q_OBJECT
public:
    Q_INVOKABLE QString analyse(QString source);

private:
//    Q_INVOKABLE QString replace(QString format, QString& source, void (*function)(QString &source, int seed, QRegExp regex));
//    Q_INVOKABLE QString test(QString &source, int seed, QRegExp regex);
};

#endif // SYNTAXHIGHLIGHTER_H
