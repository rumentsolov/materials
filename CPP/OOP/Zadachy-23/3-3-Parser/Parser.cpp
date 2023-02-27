/*
You are given code that reads objects from the console, each from a separate line, until a "stopLine" is entered. The format of the input is the following

· A character called type, which determines the type of each object – i for integer, w for string, and s for Song

· A line representing the stopLine

· Lines, each containing a single object, until a line matching the stopLine is reached – the program should not read anything after the stopLine.

The program then prints all the objects on a single line, separated by single spaces.

Your task is to study the available code and create the any necessary files for the program to compile and work correctly.

You should submit a single .zip file for this task, containing ONLY the files YOU created. The Judge system has a copy of the other files and will compile them, along with your files, in the same directory.

Restrictions

Each type of object supports stream insertion operator<<

Each object is valid, meaning that each line representing an object can be turned into an object of the appropriate type through stream extraction operator>>

Examples

Input:
i
7
1
2
3
4
5
6
7
8

Output:
1 2 3 4 5 6

Input:
s
...
caught-somewhere-in-time 446
superpalav 246
...
this is not printed

Output:
caught-somewhere-in-time 446 superpalav 246
*/