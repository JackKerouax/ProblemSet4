# Problem Set 4

Start Date and Time| Due Date and Time | Cut-off Date and Time |
---|---|---|
10:50:00 AM on October 4, 2019 | 11:59:59 PM on October 10, 2019 | 12:00:00 AM on October 18, 2019 |

## Reading
- Read the C Programming Language book:
	- Chapter 7.1 ~ 7.5
	- Chapter 1.5, 	1.6, 1.9
	- Chapter 8.5
	
## Problem 4.1
- Create a file named `ProblemSet4.1.c`.
- Write a function named `arrayContains` that checks if a given integer item, acquired through `scanf()`, is in an integer array named `numbers` with following elements: `{2, 4, 6, 8, 10}`. The function should take two arguments: the value gotten from `scanf()` and the array to compare the value against. In the function, traverse the array and compare each element with the value gotten from `scanf()`. If an element is found return `true`. If the array is exhausted, return false.
- Test the function in the `main()` function with `scanf()`.
- Print the result of comparison using `printf()`.

## Problem 4.2 
- Create a file named `ProblemSet4.2.c`.
- Write a function named `removeLastCharacter` that removes the last character in a given string acquired through `fgets()`. The function should take the string acquired through `fgets()`. Use array indexing to reach the last element and replace it with a NULL. The function should not return anything.
- Test the function int he `main()` function with `fgets()`.
- Print the resulting string using `fputs()`

## Problem 4.3
- Create a file named `ProblemSet4.3.c`.
- Write a program that reads `LoremIpsum.txt` and prints out the frequency of usage of each letter, digit, and punctuation.

## Grading Rubric
Description|Grade
---|---:|
No compilation warning or error| 10%
Clean, understandable, commented, and organized | 20%
Thoroughly documented in README.md | 20%
Correctly implemented | 50%
**Total** | **100%**

## Submission Guideline
- Make sure you have a folder with your name at the root directory of the repository.
- Create a folder name with the right problem set number (i.e. `Problem Set 1`) within the folder that has your name.
- Please follow the example `README.md` file in `Akito van Troyer/Problem Set 1/` for documenting your problem set.
- Commit and push C files and README.md for this problem set into the newly created folder to complete the problem set.

## Submission policy:
- All problem must be submitted to: https://github.com/navreyort/EP-353-FA2019
- Late projects will incur a penalty of 10% for each day it is late.
- Problem sets and projects are due by 11:59:59pm on the date specified
- After 12:00:00am (the next day after the due day), your problem sets/projects is one day late (-10%).
- After the next 12:00:00am cycle (two days after the due day), your problem sets/projects is two days late (-20%).
- Problem sets and projects will not be accepted after 12:00:00am at one week after the deadline

--- 
**Berklee College of Music**  
Electronic Production and Design  
EP-353: Audio Programming in C  
Fall 2019