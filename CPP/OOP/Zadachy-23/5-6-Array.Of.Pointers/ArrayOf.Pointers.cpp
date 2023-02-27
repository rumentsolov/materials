/*

NOTE: this task is the same as Task 1 – Register, and Task 2 – Register of Three, however it does NOT use a
Register class, but instead allocates Company objects in dynamic memory and uses an ArrayOfPointers class
to store these pointers (NOTE: the provided code does NOT deallocate the memory it allocates).

You are given code that reads information about Company objects from the console, parses it multiple times (the
number of repetitions is entered on the first line on the console), and prints the information about one of the
Company objects, specified by its id.
The provided code handles input, output, and repeated executions – your task is to declare and implement the
ArrayOfPointers class in any way you think will accomplish the task, without leaking memory. The provided
code expects the declaration to be in an ArrayOfPointers.h file, but you are free to choose whether to
implement the class in the same file, in a .cpp file, or multiple files.
You should submit a single .zip file for this task, containing ONLY the file(s) YOU created. The Judge system has a
copy of the other files and will compile them, along with your file, in the same directory.
Restrictions
There will always be a Company with the specified id. Make sure there are no memory leaks.
Examples

Input :
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