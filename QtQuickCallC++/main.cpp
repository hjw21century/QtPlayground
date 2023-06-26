#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "myclass.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<MyClass>("com.example", 1, 0, "MyClass");

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/QtQuickTest/Main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
