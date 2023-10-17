#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/hello/main.qml"_qs);
    engine.load(url);
    qDebug() << "Hello world !";
    return app.exec();
}