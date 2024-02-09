#include <QApplication>
#include <QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMainWindow>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Create the stacked widget
    QStackedWidget stackedWidget;

    // Create some example widgets
    QWidget widget1;
    widget1.setStyleSheet("background-color: lightblue;");
    QPushButton button1("Switch to Widget 2");
    QVBoxLayout layout1(&widget1);
    layout1.addWidget(&button1);

    QWidget widget2;
    widget2.setStyleSheet("background-color: lightgreen;");
    QPushButton button2("Switch to Widget 1");
    QVBoxLayout layout2(&widget2);
    layout2.addWidget(&button2);

    // Add the widgets to the stacked widget
    stackedWidget.addWidget(&widget1);
    stackedWidget.addWidget(&widget2);

    // Connect button signals to switch between widgets
    QObject::connect(&button1, &QPushButton::clicked, [&]() {
        stackedWidget.setCurrentIndex(1);
    });

    QObject::connect(&button2, &QPushButton::clicked, [&]() {
        stackedWidget.setCurrentIndex(0);
    });

    // Set up the main window
    QMainWindow mainWindow;
    mainWindow.setCentralWidget(&stackedWidget);
    mainWindow.setGeometry(100, 100, 400, 300);
    mainWindow.show();

    return a.exec();
}
