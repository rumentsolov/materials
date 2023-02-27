/*
You are given code that reads a series of objects, spread on multiple lines, then prints them back on the console in a
single line. The code uses typed streams, which know how to parse the objects from a string. However, the base
class for those streams is missing. Your task is to study the provided code and implement that base class so that the
code compiles and accomplishes the task described.
Examples
Input
1 2 3
4 5
end
int


Output
1 2 3 4 5

Input
this
is
the
string stream
end
string

Output
this is the string stream

Input
0.5 1.1
42 4.2 1.3 13
end
vector

Output
(0.5, 1.1) (42, 4.2) (1.3, 13)
*/