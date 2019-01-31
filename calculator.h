/**
* Purpose: Class to provide a functional user interface for computing infix mathematical expressions.
*
* @author   Solomon Colley
* @since    01/27/2019
* @file     calculator.h
*/

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QString>
#include "logic.h"      // Logic for Expression Evaluation

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_EqualsButton_clicked();                 /** Prints the result of user's infix expression to the output text edit. */
    void on_ClearButton_clicked();                  /** Clears the input/output windows in the ui. */
    void on_UndoButton_clicked();                   /** Removes the last QChar form the input line edit. */

    void on_SquareRootButton_clicked();             /** Inputs the 'sqrt(' token. */
    void on_PowerButton_clicked();                  /** Inputs the '^' token. */
    void on_LeftParenthesisButton_clicked();        /** Inputs the '(' token. */
    void on_RightParenthesisButton_clicked();       /** Inputs the ')' token. */
    void on_PlusButton_clicked();                   /** Inputs the '+' token. */
    void on_MinusButton_clicked();                  /** Inputs the '-' token. */
    void on_MultiplyButton_clicked();               /** Inputs the '*' token. */
    void on_DivideButton_clicked();                 /** Inputs the '/' token. */
    void on_ModulusButton_clicked();                /** Inputs the '%' token. */
    void on_DecimalButton_clicked();                /** Inputs the '.' token. */

    void on_ZeroButton_clicked();                   /** Inputs the digit '0'. */
    void on_OneButton_clicked();                    /** Inputs the digit '1'. */
    void on_TwoButton_clicked();                    /** Inputs the digit '2'. */
    void on_ThreeButton_clicked();                  /** Inputs the digit '3'. */
    void on_FourButton_clicked();                   /** Inputs the digit '4'. */
    void on_FiveButton_clicked();                   /** Inputs the digit '5'. */
    void on_SixButton_clicked();                    /** Inputs the digit '6'. */
    void on_SevenButton_clicked();                  /** Inputs the digit '7'. */
    void on_EightButton_clicked();                  /** Inputs the digit '8'. */
    void on_NineButton_clicked();                   /** Inputs the digit '9'. */
private:
    Ui::Calculator *ui;
    Logic *logic = new Logic();
    QString expression_string;
};

#endif // CALCULATOR_H
