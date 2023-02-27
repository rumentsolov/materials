/*
You are given code for a program that reads a specified number of lines from the console, and then formats them in
the following way:
•
•
•
It prepends two lines of characters before the lines from the input
It then places each of the original lines prefixing it with its number (starting from 1) followed by ". "
It then appends a line of characters at the end
The program does all this (you don’t have to do input, output, or determine line numbers), but it uses operators
which aren’t defined in the C++ language.
Your task is to study the code in OperatorsMain.cpp and implement the necessary operators in Operators.h
(which is #include-d by OperatorsMain.cpp), so that OperatorsMain.cpp compiles successfully and
accomplishes the task described. Your Operators.h file should resemble the following:


Operators.h
#ifndef OPERATORS_H
#define OPERATORS_H
#include <ostream>
#include <vector>
#include <string>
#include <sstream>
// Place your code here
#endif // !OPERATORS_H
You should submit a single .zip fil

Input:
2
hello
c++ operators

Output:
Formatted Lines
----------------
1. hello (5)
2. c++ operators (13)
----------------
*/