/*
You are given a List.h file containing the declarations for a List class representing a linked list, and a
ListMain.cpp file, which defines a main() function and uses the List class to merge several sorted lists from
the standard input into a single sorted list printed on the standard output.
•
•
•
Create a List.cpp file which contains the implementation of the List class.
The files should be successfully compiled together.
The resulting program should correctly merge sorted lists read from the console into a sorted list, which
should be printed on the console (main.cpp does this if you implement List.cpp).
• Submit a .zip file containing the List.cpp file and nothing else.
How you choose to implement the linked list is up to you, but you should make sure all the public methods of the
List class work correctly, as they are used by main.cpp. The declarations in List.h should be mostly self-
explanatory, but if you are unsure what a method should do – just see how ListMain.cpp uses it and make sure
you implement it so that the program works correctly.
You are NOT allowed to modify ListMain.cpp or List.h.


The task this program solves is merging multiply sorted (ascending) lists of integer numbers into a single sorted
(ascending) list of integer numbers. For example, the lists 1 17, and -3 6 25 42 should be merged into the
following list: -3 1 6 17 25 42.
Input
One or more lines, each of which contains from 1 to 100 integers, separated by single spaces. The final line will not
contain numbers and will only contain the string "end".
Output
A line containing the items of the merged, sorted list, in ascending order, separated by single spaces.
Restrictions
The total number of elements entered in the input will NOT exceed 10000.
The number of elements per input list (line) will NOT exceed 100.
Numbers in the input will be from -9999 to +9999 (both inclusive).
The total running time of your program should be no more than 0.5s.
The total memory allowed for use by your program is 5MB.

xamples
Input
1 17
-3 6 25 42
end

Output
-3 1 6 17 25 42

Input:
4
5 6
1 2 3
end

Output
1 2 3 4 5 6

Input
1 3
2
end

Output
1 2 3
*/