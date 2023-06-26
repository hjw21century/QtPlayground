#include "myclass.h"
#include <QDebug>

MyClass::MyClass(QObject *parent)
    : QObject{parent}
{

}

void MyClass::myFunction(const QString &text)
{
    qDebug() << "Received text from QML:" << text;
}
