/*
You are given code similar to Task 4 – Resources, however, this time the main() code uses a Lecture object (the
class for which should be defined in a Lecture.h file) to store and organize the resources. It also uses several
operators to do that and iterates the Resources in the Lecture through a range-based for loop (hint: the Lecture
class will need to begin() and end() methods which return iterators).
Another difference is that in this task, there can be two Resource objects in the input which have different links
but have the same id. This indicates that the Resource has been changed – i.e. if a Resource with the same id is
encountered multiple times, only keep its version appearing latest in the input.
The program’s output should be the same as in Task 4 – the resources ordered by id, followed by the number of
occurrences of each ResourceType, ordered Presentation (if non-zero), then Demos (if non-zero), and last
Video (if non-zero).
Your task is to study the code, figure out what operators and classes you need to implement, search the Web for
concepts you aren’t familiar with, and submit the files necessary for the program to compile and run successfully.
You should submit a single .zip file for this task, containing ONLY the files YOU created. The Judge system has a
copy of the other files and will compile them, along with your file, in the same directory.

Input:
6
42 Presentation http://thisiswillberenamed.com
255 Demo http://kottakoa.com
42 Presentation http://theanswertolifetheuniverseandeverything.com
13 Demo http://this.will.also.be.renamed.com
13 Demo http://example.com
69 Video http://yeahyouwish.com

Output:
... by id:
13 Demo http://example.com
42 Presentation http://theanswertolifetheuniverseandeverything.com
69 Video http://yeahyouwish.com
255 Demo http://kottakoa.com
... by type:
Presentation: 1
Demo: 2
Video: 1

Input:
6
42 Demo http://thisiswillberenamed.com
255 Demo http://kottakoa.com
42 Demo http://theanswertolifetheuniverseandeverything.com
13 Demo http://this.will.also.be.renamed.com
13 Demo http://example.com
69 Video http://yeahyouwish.com

Output:
... by id:
13 Demo http://example.com
42 Demo http://theanswertolifetheuniverseandeverything.com
69 Video http://yeahyouwish.com
255 Demo http://kottakoa.com
... by type:
Demo: 3
Video: 1

*/