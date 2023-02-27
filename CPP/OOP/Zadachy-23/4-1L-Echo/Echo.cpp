/*
You are given code for a program that manages email contacts, that has a console command-based UI. The program prints hints to the user and the user enter commands to be executed.

The program has options to disable printing the hints (though commands explicitly printing information about contact will still print a result even if hints are disabled). That part of the code is missing. Your task is to implement the necessary functions and variables used by the existing code so that the program compiles and accomplishes the task specified.

You should submit a single .zip file for this task, containing ONLY the files you created.

The Judge system has a copy of the other files and will compile them, along with your file, in the same directory.

Restrictions & Hints

You can assume the code works correctly and the input will always lead to a valid sequence of commands. Focus on the hint-printing part, you can mostly ignore the rest (though it would be a good idea to study the code to see how such programs may be implemented).

In addition to the skeleton, you are given a Windows executable that behaves correctly so you can study the wanted behavior before implementing the necessary code.

Examples

Input
y
1
ben bendover@example.com
4

Output
e === Contact Manager (C) Deluxe Edition === Hints on? (y/n): --- Menu --- 
1. Add contact 
2. Remove contact 
3. Print contact 
4. Toggle hints off/on 
e. Exit Please enter a choice (1, 2, 3, or Q): 
Enter contact name and email: 
--- Menu --- 
1. Add contact 
2. Remove contact 
3. Print contact
4. Toggle hints off/on e. Exit Please enter a choice (1, 2, 3, or Q):

Input:
n
1
ben bendover@example.com
3
ben
4
2
ben
e

Output:
=== Contact Manager (C) 
Deluxe Edition === 
Hints on? (y/n): 
ben bendover@example.com 
--- Menu --- 
1. Add contact 
2. Remove contact 
3. Print contact 
4. Toggle hints off/on 
e. Exit 
Please enter a choice (1, 2, 3, or Q): 
Enter the name or email of a contact: 
... removed ben bendover@example.com 
--- Menu --- 
1. Add contact 
2. Remove contact 
3. Print contact 
4. Toggle hints off/on 
e. Exit 
Please enter a choice (1, 2, 3, or Q): 
Exiting... 
Thank you for using Contact Manager (C) Deluxe!
*/