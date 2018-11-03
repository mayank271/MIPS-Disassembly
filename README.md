# MIPS-Disassembly
C++ Code for MIPS32 Disassembly<br>
Given an 32-bit instruction in its hex form, the code returns the type of the instruction
as well the decoded instruction.<br>
For eg.,> Input -> 80860000 <br>
        > Output -> I lb $a2, 0($a0)

# Compile as
g++ -o out main.cpp MIPS_functions.cpp

# References
 http://alumni.cs.ucr.edu/~vladimir/cs161/mips.html<br>
 https://inst.eecs.berkeley.edu/~cs61c/resources/MIPS_help.html<br>
 https://en.wikibooks.org/wiki/MIPS_Assembly/Instruction_Formats<br>
 The MIPS32™ Architecture For Programmers Volume II<br>
