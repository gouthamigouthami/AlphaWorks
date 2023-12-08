/*std::unique_ptr is a smart pointer that owns and manages another
 * object through a pointer and disposes of that object
 * when the unique_ptr goes out of scope.
 * security (no fake copy assignments),
 *  added features (deleters), and support for arrays.

the managing unique_ptr object is destroyed.*/

#include <QCoreApplication>
#include<QDebug>
#include "test.h"
void wow()
{
    std::unique_ptr<Test> p1(new Test());
        p1->doStuff();
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    wow();

    return a.exec();
}
