//#include "widget.h"
#include<QtWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window=new QWidget();
    window->setAttribute(Qt::WA_DeleteOnClose);
    QVBoxLayout *topLayout=new QVBoxLayout(window);

    QSlider *slider=new QSlider(Qt::Horizontal);
                      slider->setRange(0,100);
    // QSpinBox *spin=new QSpinBox;
    //                   spin->setReadOnly(true);
                      QLCDNumber *integerLcd=new QLCDNumber;
                      integerLcd->setDigitCount(3);
    QHBoxLayout *horizontalLayout=new QHBoxLayout;
                      horizontalLayout->addWidget(slider);
                      // horizontalLayout->addWidget(spin);
                      horizontalLayout->addWidget(integerLcd);
                      topLayout->addLayout(horizontalLayout);
            //           QObject::connect(slider,SIGNAL(valueChanged(int)),
            // spin,SLOT(setValue(int)));
                      QObject::connect(slider,
                                &QSlider::valueChanged,
                                       integerLcd,
                                       static_cast<void(QLCDNumber::*)(int)>
                          (&QLCDNumber::display));
                      slider->setValue(40);
                      window->show();



    return a.exec();
}
