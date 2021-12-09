# Easy Breezy

## PROBLEMS

## Hello World 11636

When you first made the computer to print the sentence “Hello World!”, you felt so happy, not
knowing how complex and interesting the world of programming and algorithm will turn out to be.
Then you did not know anything about loops, so to print 7 lines of “Hello World!”, you just had to
copy and paste some lines. If you were intelligent enough, you could make a code that prints “Hello
World!” 7 times, using just 3 paste commands. Note that we are not interested about the number
of copy commands required. A simple program that prints “Hello World!” is shown in Figure 1. By
copying the single print statement and pasting it we get a program that prints two “Hello World!” lines.
Then copying these two print statements and pasting them, we get a program that prints four “Hello
World!” lines. Then copying three of these four statements and pasting them we can get a program
that prints seven “Hello World!” lines (Figure 4). So three pastes commands are needed in total and
Of course you are not allowed to delete any line after pasting. Given the number of “Hello World!”
lines you need to print, you will have to find out the minimum number of pastes required to make that
program from the origin program

## The 3n + 1 problem UVa 100

Problems in Computer Science are often classified as belonging to a certain class of problems (e.g.,
NP, Unsolvable, Recursive). In this problem you will be analyzing a property of an algorithm whose
classification is not known for all possible inputs.
Consider the following algorithm:
1. input n
2. print n
3. if n = 1 then STOP
4. if n is odd then n ←− 3n + 1
5. else n ←− n/2
6. GOTO 2
Given the input 22, the following sequence of numbers will be printed
22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
It is conjectured that the algorithm above will terminate (when a 1 is printed) for any integral input
value. Despite the simplicity of the algorithm, it is unknown whether this conjecture is true. It has
been verified, however, for all integers n such that 0 < n < 1, 000, 000 (and, in fact, for many more
numbers than this.)
Given an input n, it is possible to determine the number of numbers printed before and including
the 1 is printed. For a given n this is called the cycle-length of n. In the example above, the cycle
length of 22 is 16.
For any two numbers i and j you are to determine the maximum cycle length over all numbers
between and including both i and j
