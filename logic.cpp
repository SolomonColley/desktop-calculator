/**
* Purpose: This class is used to take a valid or invalid infix expression
* and attempt to compute a result. Invalid infix expressions will return
* 'nan' (not a number) as an error. Functionality from the library 'exprtk.hpp'
* is used to perfomr the computations.
*
* @author   Solomon Colley
* @since    01/27/2019
* @file     logic.cpp
*/

#include "logic.h"

Logic::Logic()
{
    /* Initialize class private member variables. */
    result = 0.0;
    expression_string = "";
} // end default constructor

std::string Logic::evaluate(const std::string &expression_string)
{
    /* Assign argument to class private member and call the
    utility function to compute the result. */
    this->expression_string = expression_string;
    evaluate_utility();

    return outStream.str();
} // end evaluate

void Logic::evaluate_utility()
{
    /* Reset the ostringstream */
    outStream.str("");
    outStream.clear();

    /* If the expression compiles successfully, get the result. Else not a number */
    if (parser.compile(expression_string, expression))
    {
        result = expression.value();
        outStream << result;
    }
    else
        outStream << "nan";
} // end evaluate_utility
