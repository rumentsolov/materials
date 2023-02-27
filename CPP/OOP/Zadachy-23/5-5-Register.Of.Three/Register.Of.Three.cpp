/*
NOTE: this task is the same as Task 1 – Register, however the main() function in the skeleton is different and
requires you to implement the Rule of Three for the Register class.
You are given code that reads information about Company objects from the console, parses it multiple times (the
number of repetitions is entered on the first line on the console), and prints the information about one of the
Company objects, specified by its id.
The provided code handles input, output, and the repeated executions – your task is to implement the Register
(which is declared in the Register.h file, you need to create the Register.cpp file) class it uses for storing and
looking up the Company objects.
You should submit a single .zip file for this task, containing ONLY the file(s) YOU created. The Judge system has a
copy of the other files and will compile them, along with your file, in the same directory.
Restrictions
There will always be a Company with the specified id.
Make sure there are no memory leaks.
Examples

Input:
1
2
42 theanswer
69 thehub
42
end

Output:
42 theanswer

Input:
1000
2
42 theanswer
69 thehub
42
end

Output:
42 theanswer

*/