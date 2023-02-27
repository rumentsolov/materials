/*
You are given code for a program, which reads lines from the console containing the information about Company
objects, sends those lines as a single string to a function named parseUniqueCompanies, and expects the
function to return a pointer to a dynamically allocated array, which the program iterates and prints information
about each parsed Company.
In the input, each Company is described by a single line, containing the Company id (an integer) followed by the
Company name (a string), separated by a single space.
In addition to the string, the program passes two other parameters:
•
•
an integer, which it expects to be set (by the parseUniqueCompanies function) with the number of
companies in the input
a function pointer/reference to a function that generates a unique identifier for a company. The
parseUniqueCompanies function is expected to return no more than one company (the first in the input)
for each unique identifier
The program decides which unique identifier function to use based on a number in the last line of the input:
•
•
•
a unique identifier is the Company’s id
a unique identifier is the Company’s name
a unique identifier is the Company’s name concatenated by the Company’s id
Your task is to implement the parseUniqueCompanies function in a ParseCompanies.h file.
Your ParseCompanies.h file should resemble the following:
ParseCompanies.h
#ifndef PARSE_COMPANIES_H
#define PARSE_COMPANIES_H
#include "Company.h"
// Place your code here
#endif // !PARSE_COMPANIES_H
You should submit a single .zip file for this task, containing ONLY the ParseCompanies.h file. The Judge system
has a copy of the other files and will compile them, along with your file, in the same directory.
Examples

Input
123 valid
123 copy
321 ancientmarinerinc
end
1

Output
123 valid
321 ancientmarinerinc

Input
42
theanswertolifetheuniverseandeverything

Output
42
theanswertolifetheuniverseandeverything

Input
420
theanswertolifetheuniverseandeverything
end
3

Output
420
theanswertolifetheuniverseandeverything
*/