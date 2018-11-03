# MIPS-Disassembly
C++ Code for MIPS32 Disassembly

## Prerequisites
A recent version of GCC (7.2.0 or later)

## Running the code
Given a 32-bit instruction in its hex form, the code outputs the type of the instruction
as well the decoded instruction.
```
g++ -o out main.cpp MIPS_functions.cpp
```
```
./out
```
```
Input: 80860000
Output: I 
        lb $a2, 0($a0)
```
## References
http://alumni.cs.ucr.edu/~vladimir/cs161/mips.html<br>
https://inst.eecs.berkeley.edu/~cs61c/resources/MIPS_help.html<br>
https://en.wikibooks.org/wiki/MIPS_Assembly/Instruction_Formats<br>
[The MIPS32™ Architecture For Programmers Volume II](https://www.cs.cornell.edu/courses/cs3410/2008fa/MIPS_Vol2.pdf)<br>
