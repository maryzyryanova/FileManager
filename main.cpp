#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationName("FileManager");
    app.setWindowIcon(QIcon("/Users/mariazyryanova/FileManager/Images/App.ico"));
    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
