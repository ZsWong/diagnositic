#include "mainwindow.h"

#include <iostream>
#include <QApplication>

#include <QTransform>
int main(int argv, char *args[])
{
    Q_INIT_RESOURCE(diagnostic); // 删掉也可以
#ifdef Q_OS_ANDROID
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QApplication app(argv, args);

    MainWindow mainWindow;
    mainWindow.setGeometry(100, 100, 800, 500);
    mainWindow.show();

    return app.exec();
}