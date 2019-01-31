/**
* Purpose: Class to provide a functional user interface for computing infix mathematical expressions.
*
* @author   Solomon Colley
* @since    01/27/2019
* @file     calculator.cpp
*/

#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete logic;
    delete ui;
}

void Calculator::on_EqualsButton_clicked()
{
    /* Get the infix expression and append it and its result to the output text edit. */
    expression_string = ui->InputLineEdit->text();
    ui->OutputTextEdit->insertPlainText(expression_string);
    ui->OutputTextEdit->insertPlainText(" = ");
    ui->OutputTextEdit->insertPlainText(QString::fromStdString(logic->evaluate(((expression_string.toStdString())))));
    ui->OutputTextEdit->appendPlainText("");
}

void Calculator::on_ClearButton_clicked()
{
    /* Reset the input and output text fields. */
    ui->OutputTextEdit->setPlainText("");
    ui->InputLineEdit->setText("");
}

void Calculator::on_UndoButton_clicked()
{
    /* Get the text, chop off the last qchar, reset the text to the chopped expression, and move the
    cursor to the end of the text. */
    expression_string = ui->InputLineEdit->text();
    expression_string.chop(1);
    ui->InputLineEdit->setText(expression_string);
    ui->InputLineEdit->setCursorPosition(expression_string.length());
}

void Calculator::on_SquareRootButton_clicked()
{
    ui->InputLineEdit->insert("sqrt(");
}

void Calculator::on_PowerButton_clicked()
{
    ui->InputLineEdit->insert("^(");
}

void Calculator::on_LeftParenthesisButton_clicked()
{
    ui->InputLineEdit->insert("(");
}

void Calculator::on_RightParenthesisButton_clicked()
{
    ui->InputLineEdit->insert(")");
}

void Calculator::on_PlusButton_clicked()
{
    ui->InputLineEdit->insert("+");
}

void Calculator::on_MinusButton_clicked()
{
    ui->InputLineEdit->insert("-");
}

void Calculator::on_MultiplyButton_clicked()
{
    ui->InputLineEdit->insert("*");
}

void Calculator::on_DivideButton_clicked()
{
    ui->InputLineEdit->insert("/");
}

void Calculator::on_ModulusButton_clicked()
{
    ui->InputLineEdit->insert("%");
}

void Calculator::on_DecimalButton_clicked()
{
    ui->InputLineEdit->insert(".");
}

void Calculator::on_ZeroButton_clicked()
{
    ui->InputLineEdit->insert("0");
}

void Calculator::on_OneButton_clicked()
{
    ui->InputLineEdit->insert("1");
}

void Calculator::on_TwoButton_clicked()
{
    ui->InputLineEdit->insert("2");
}

void Calculator::on_ThreeButton_clicked()
{
    ui->InputLineEdit->insert("3");
}

void Calculator::on_FourButton_clicked()
{
    ui->InputLineEdit->insert("4");
}

void Calculator::on_FiveButton_clicked()
{
    ui->InputLineEdit->insert("5");
}

void Calculator::on_SixButton_clicked()
{
    ui->InputLineEdit->insert("6");
}

void Calculator::on_SevenButton_clicked()
{
    ui->InputLineEdit->insert("7");
}

void Calculator::on_EightButton_clicked()
{
    ui->InputLineEdit->insert("8");
}

void Calculator::on_NineButton_clicked()
{
    ui->InputLineEdit->insert("9");
}
