#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class MyClass : public QObject
{
    Q_OBJECT
public:
    explicit MyClass(QObject *parent = nullptr);

    Q_INVOKABLE void myFunction(const QString &text);

signals:

};

#endif // MYCLASS_H
