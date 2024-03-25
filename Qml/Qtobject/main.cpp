#include "UserList.h"

#include <QGuiApplication>
#include <QQmlContext>
#include <QQuickView>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    UserList userList;

    QQuickView view;
    view.rootContext()->setContextProperty("_userList", &userList);
    view.setSource(QUrl("qrc:///main.qml"));
    view.show();

    return app.exec();
}
