/*
You are given information about companies – lines with names and ids, ending with the line "end" – as well as a
Company class that represents a company. Your task is to sort the companies either by their name or by their id. The
last line of the input will contain either "name" or "id", indicating what you should sort the companies by
You are also given code that does the reading and writing to the console, and uses a function named sortBy,
defined in a file SortBy.h, to do the actual sorting. Note that the code you are given works on pointers, instead of
normal Company objects. The sortBy function accepts 3 parameters:
•
•
•
A Company* to the first company in an array of companies.
A Company* pointing AFTER the last company in the array of companies.
A function pointer/reference, which compares 2 Company objects (not pointers) and returns true if its
first parameter is “less than” its second parameter. Study the SortPointersMain.cpp file for more
information on what functions can be passed in to your function.
You should submit a single .zip file for this task, containing ONLY the SortBy.h file, containing an int main()
function that solves the task described.
SortBy.h
#ifndef SORT_BY_H
#define SORT_BY_H
#include "Company.h"
// Place your code here
#endif // !SORT_BY_H
The Judge system has a copy of the other files and will compile them, along with your file, in the same directory.
Examples

Input
acme 424242420
softuni_foundation 20140414
itjoro 878968302
end
id

Output
softuni_foundation 20140414
acme 424242420
itjoro 878968302
*/