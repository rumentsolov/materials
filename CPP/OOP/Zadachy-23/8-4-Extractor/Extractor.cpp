/*
You are given code that reads a line from the console and extracts certain items from it. The provided code uses an
Extractor class that selects the items to extract. There are 3 types of extractors:
• digits – extracts each digit from the string as a separate item
• numbers – extracts sequences of digits
• quotes – extracts sequences of symbols between two quote (") marks
Your task is to implement the necessary Extractor classes and initialization logic.
You should submit only the file(s) you created. The Judge system has the other files and will compile them, along
with your file(s), in the same directory.
Restrictions
All quotes will be “closed”, i.e. there will always be an even number of " symbols in the input.
There will be no “negative numbers” to extract.
Examples

Input

hello 123 "bye" 4 bye
digits

Output
1
2
3
4

Input
hello 123 "bye" 4 bye
numbers

Output
123
4

Input
hello 123 "bye" 4 bye
quotes

Output
bye
*/