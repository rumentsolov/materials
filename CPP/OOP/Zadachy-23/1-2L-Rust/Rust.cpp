/*
You are given a 10x10 matrix representing a metal square, which has begun to rust. There are 3 types of symbols in
the matrix – a . (dot) means a healthy part of the metal, a # indicates a rust-resistant part, and a ! indicates a part
that has begun to rust.
There may be 0, 1 or more parts that have begun to rust.
The rust spreads from a rusty cell to healthy cells by "infecting" adjacent cells directly above, to the right, below, and
to the left of itself (no diagonals), at the same time. The rust cannot infect cells that are indicated as rust resistant.
Let’s define the time it takes for all cells adjacent to a rusty cell to get infected as 1 unit.
After reading the matrix, read a single integer – the elapsed time in units (as defined above) – and print a matrix
representing how the metal square will look after the rust has been acting on it for that amount of time.

Input :

..........
....!.....
..........
..........
..........
..........
..........
..........
..........
..........

4

Output:
.!!!!!!!..
!!!!!!!!!.
.!!!!!!!..
..!!!!!...
...!!!....
....!.....
..........
..........
..........
..........


Input:
..........
....!.....
...###....
..........
..........
..........
..........
..........
..........
..........
5

Output:
!!!!!!!!!.
!!!!!!!!!!
!!!###!!!.
.!!!.!!!..
..!...!...
..........
..........
..........
..........
..........

Input:
!........!
..........
..........
..........
..........
..........
..........
..........
..........
!........!
5

!!!!!!!!!! 
!!!!!!!!!! 
!!!!..!!!! 
!!!....!!! 
!!......!! 
!!......!! 
!!!....!!! 
!!!!..!!!! 
!!!!!!!!!! 
!!!!!!!!!! 
5

*/