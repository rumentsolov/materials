/*
A range is a pair of integer numbers – let’s say that from and to form the range [from, to].
If an integer number x is such that from <= x <= to, then we say that x is inside the range [from, to], or that
the range [from, to] contains x.
You are given a set of ranges, in which no two ranges intersect. That means that no range contains the from or to
of another range.
You are also given a sequence of integer numbers – let’s call them to check numbers.
For each of the check numbers, print "in" if the number is inside any range, and "out" otherwise (i.e. if no range
contains the number).
NOTE: there will be a large number of ranges and an even larger number of integer numbers.
Input
The input will be separated into two parts.
The first part will contain the ranges, each described as two integer numbers on a separate line of the standard
input (the from and to of the range), until a line containing only the symbol '.' (dot) is reached.
After that, each line of the standard input will contain exactly one check number, until a line containing only the
symbol '.' (dot) is reached.
Output
For each check number in the input, print "in" if that number is contained in any range, or "out" if no range
contains that number.
Restrictions
There will be between 1 and 10000 ranges (inclusive).
There will be between 1 and 100000 check numbers (inclusive).
For every range, from <= to.
In 30% of the tests, there will be no more than 10 ranges and 10 numbers.
The total running time of your program should be no more than 0.4s
The total memory allowed for use by your program is 8MB

Input

1 3
5 10
20 20
.
0
2
3
4
5
7
19
20

Output
out
in
in
out
in
in
out
in

Input
-5 0
1 3
.
-10000
-1000
0
10

Output
out
out
in
out
*/