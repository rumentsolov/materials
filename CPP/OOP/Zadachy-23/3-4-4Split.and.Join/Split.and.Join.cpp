/*
You are given code, which reads the following

· A line containing a single character, called the separator

· Another line which needs to be split into items by the separator

· A character called type, which determines the type of each item – i for integer, w for string, and s for Song

· A string called a joinStr, which will be used to join the separated items together

The program handles input and output but uses a split and a join function to first split the line into items of the appropriate type, then join it back together into a single string and print it on the console. These need to be implemented for the program to compile and work correctly.

Your task is to study the available code and create the any necessary files for the program to compile and work correctly.

You should submit a single .zip file for this task, containing ONLY the file(s) YOU created. The Judge system has a copy of the other files and will compile them, along with your file, in the same directory.

Restrictions

No item will contain the separator, i.e. the number of items is exactly equal to 1 + the number of separators.

Each item is valid, meaning that each item string can be turned into an item of the appropriate type through stream extraction operator>>

Examples

Input
,
1,2,3,4,5,6
i
-> 

Output:
1->2->3->4->5->6

Input:
;
caught-somewhere-in-time 446;superpalav 246
s
> 

Output:
caught-somewhere-in-time 446>superpalav 246

*/