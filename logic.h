/**
* Purpose: This class is used to take a valid or invalid infix expression
* and attempt to compute a result. Invalid infix expressions will return
* 'nan' (not a number) as an error. Functionality from the library 'exprtk.hpp'
* is used to perfomr the computations.
*
* @author   Solomon Colley
* @since    01/27/2019
* @file     logic.h
*/

#ifndef LOGIC_H
#define LOGIC_H

#include <string>
#include <sstream>
#include "exprtk.hpp"       // Calculator Logic and Functionality

class Logic
{
public:
    // Default Constructor
    Logic();

    /**
    * Evaluates an infix expression and converts the result
    * to a QString object, then returns it.
    * @param    const std::tring& expression_string
    * @return   The result of the infix expression as QString, or 'nan' if computation fails
    */
    std::string evaluate(const std::string& expression_string);
private:
    double result;
    std::string expression_string;
    std::ostringstream outStream;

    typedef exprtk::expression<double> expression_t;
    typedef exprtk::parser<double> parser_t;
    expression_t expression;
    parser_t parser;

    /**
    * Utility function for public method 'evaluate'. Computes the
    * result of the infix expression and assigns it to private members
    * expression_string and outStream.
    * @return   void
    */
    void evaluate_utility();
};

#endif // LOGIC_H
