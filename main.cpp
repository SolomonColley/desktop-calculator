/**
* Purpose: Program for creating a calculator-like user interface and for providing
* users with the capability to evaluate valid mathematical expressions in infix
* notation.
*
* @author   Solomon Colley
* @since    01/27/2019
* @file     main.cpp
*/

#include "calculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator w;
    w.show();

    return a.exec();
} // end main
