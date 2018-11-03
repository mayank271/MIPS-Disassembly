#include <regex>
#include <string>
#include <vector>
#include "Header.h"

#define I_SIZE 8

//Other functions yet to be added

/**
 * Takes input from the command line, validates it and then
   disassembles it into the corresponding instruction,
   R-type instruction : [ OPCODE ] [ RS ] [ RT ] [ RD ] [ SHMT ] [ FUNCT ]
   I-type instruction : [ OPCODE ] [ RS ] [ RT ] [ IMMEDIATE ]
   J-type instruction : [ OPCODE ] [ ADDRESS ]
   Incase of invalid (doesn't match regex - [0-9a-f]{8}) instruction
   it returns an empty vector.
 * @param i : Input string from main
 * @return vector containing two strings - instruction type and the decoded instruction.
 */
std::vector<std::string> input(std::string i){
    std::vector<std::string> decoded;
    std::regex e ("[0-9a-f]{8}");

    if(!std::regex_match(i,e)){
        //"Invalid Input";
    }
    else{
        std::vector <int> temp = binaryVal(i);
        std::vector <int> curr(temp.begin(),temp.begin()+6);
        int op_code = bin_to_int(curr);
        decoded = decode_opcode(op_code,temp);
    }
    return decoded;
}
