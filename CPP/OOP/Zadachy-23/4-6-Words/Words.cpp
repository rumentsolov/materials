/*
ou are given code that reads two lines of words (strings containing lowercase English letters, separated by spaces) and prints the number of occurrences of each word (in lexicographical order, as C++ orders strings) in the first input line, then does the same for the second input line.

The provided code handles input and output, however, it uses a Word class for the counting. Your task is to implement the Word class so that the program compiles successfully and runs as described.

NOTE: the main() function just reads and initializes objects of the Word class, then adds them to a set to sort them lexicographically. It does not call any methods, other than the ones for getting the word string and the count for it at the end. You need to figure out how to handle the counting based on the provided code.

You should submit a single .zip file for this task, containing ONLY the file(s) YOU created. The Judge system has a copy of the other files and will compile them, along with your file, in the same directory.

Input:
she sells sea shells on the sea shore
hello world

Output:
on 1 
sea 2 
sells 1 
she 1 
shells 1 
shore 1 
the 1 --- 
hello 1 
world 1

Input:
she sells sea shells on the sea shore
the shells she sells are very shiny

Output:
on 1
sea 2 
sells 1 
she 1 
shells 1 
shore 1 
the 1 
--- 
are 1 
sells 1 
she 1 
shells 1 
shiny 1 
the 1 
very 1
*/