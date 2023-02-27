/*

You are given code for a program, which reads Company objects from the console, allocates dynamic memory for
them, adds them to a list, and calls a removeInvalid function multiple times during the read and once after all
companies have been read, to remove companies with invalid ids. The program then prints all companies with a
valid id. Valid ids are non-negative.
Your task is to implement the removeInvalid function a RemoveInvalid.h file. The function should remove all
companies with negative ids (use the getId() getter in Company) from the list.
Your RemoveInvalid.h file should resemble the following:
RemoveInvalid.h
#ifndef REMOVE_INVALID_H
#define REMOVE_INVALID_H
#include "Company.h"
// Place your code here
#endif // !REMOVE_INVALID_H
You should submit a single .zip file for this task, containing ONLY the RemoveInvalid.h file. The Judge system
has a copy of the other files and will compile them, along with your file, in the same directory.

Additional Requirements
The order of the valid companies in the input must match the order in the output.
Make sure there are no memory leaks.
Examples

Input
123 valid
-123 invalid
321 ancientmarinerinc
end

Output:
123 valid
321 ancientmarinerinc

Input:
42 noinvalidhere
end

Output:
42 noinvalidhere

*/