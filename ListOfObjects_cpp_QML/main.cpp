#include <QGuiApplication>
#include <QQuickView>
#include <QList>
#include "dataobject.h"
int main(int argc, char ** argv)
{
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    //Create List of 5 Objects
    QList<QObject *> data = {
        new DataObject("Prajwal"),
        new DataObject("Shashank"),
        new DataObject("Luffy"),
        new DataObject("Zoro")
    };

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setInitialProperties({{ "model", QVariant::fromValue(data) }});// here we are initializing model
                                                                        //property with list object "data"

    view.setSource(QUrl("qrc:main.qml"));
    view.show();

    return app.exec();
}

