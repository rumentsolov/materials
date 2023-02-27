/*
You are given code for a program that reads information about Resources (links to Presentations, Demos, or Videos)
in the SoftUni Learning system (well, ok, not the real system, but at least this one won’t break the links…) and then
sorts them by their id, and also prints how many of each type of resource there was in the input.
Each Resource has the following properties:
•
•
•
An integer id
A ResourceType – one of Presentation, Demo, or Video
A string representing the link to the resource
The code for the program is in the ResourcesMain.cpp and it uses a Resource class, which it expects to be
defined in a file named "Resource.h" in the same directory.
Your task is to study the ResourcesMain.cpp file and the ResourceType.h file, and to create the Resource.h
file and implement the Resource class in such a way that the program correctly reads the input, orders it by id,
prints it as lines on the output (each Resource output line should have the same format as the matching
Resource input line) and then prints the number of Resources of each type.
Your Resource.h file should resemble the following:

Resource.h
#ifndef RESOURCE_H
#define RESOURCE_H
#include "ResourceType.h"
// Place your code here
#endif // !RESOURCE_H

Input
4
255 Demo http://kottakoa.com
42 Presentation http://theanswertolifetheuniverseandeverything.com
13 Demo http://example.com
69 Video http://yeahyouwish.com

Output
... by id:
13 Demo http://example.com
42 Presentation http://theanswertolifetheuniverseandeverything.com
69 Video http://yeahyouwish.com
255 Demo http://kottakoa.com
... by type:
Presentation: 1
Demo: 2
Video: 1
*/