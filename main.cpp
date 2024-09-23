#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "filedatahandler.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    FileDataHandler* dataHandler = new FileDataHandler(&app);
    qmlRegisterSingletonInstance("FileSorter", 1, 0, "FileDataHandler", dataHandler);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("FileSorter", "Main");




    return app.exec();
}
