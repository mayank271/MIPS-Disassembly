#include <regex>
#include <string>
#include <vector>
#include "Header.h"

#define I_SIZE 8

//Other functions yet to be added

/**
 * Methods to convert data from one form to another.
 */
void int_to_bin(char c, std::vector<int> &binary){
    /**
     * Hardcoded char to binary conversion
     * Returns nothing
     */
    switch (c){
        case '0':{
            binary.push_back(0);
            binary.push_back(0);
            binary.push_back(0);
            binary.push_back(0);
            break;
        }
        case '1':{
            binary.push_back(0);
            binary.push_back(0);
            binary.push_back(0);
            binary.push_back(1);
            break;
        }
        case '2':{
            binary.push_back(0);
            binary.push_back(0);
            binary.push_back(1);
            binary.push_back(0);
            break;
        }
        case '3':{
            binary.push_back(0);
            binary.push_back(0);
            binary.push_back(1);
            binary.push_back(1);
            break;
        }
        case '4':{
            binary.push_back(0);
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(0);
            break;
        }
        case '5':{
            binary.push_back(0);
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(1);
            break;
        }
        case '6':{
            binary.push_back(0);
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(0);
            break;
        }
        case '7':{
            binary.push_back(0);
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(1);
            break;
        }
        case '8':{
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(0);
            binary.push_back(0);
            break;
        }
        case '9':{
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(0);
            binary.push_back(1);
            break;
        }
        case 'a':{
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(1);
            binary.push_back(0);
            break;
        }
        case 'A':{
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(1);
            binary.push_back(0);
            break;
        }
        case 'b':{
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(1);
            binary.push_back(1);
            break;
        }
        case 'B':{
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(1);
            binary.push_back(1);
            break;
        }
        case 'c':{
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(0);
            break;
        }
        case 'C':{
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(0);
            break;
        }
        case 'd':{
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(1);
            break;
        }
        case 'D':{
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(0);
            binary.push_back(1);
            break;
        }
        case 'e':{
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(0);
            break;
        }
        case 'E':{
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(0);
            break;
        }
        case 'f':{
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(1);
            break;
        }
        case 'F':{
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(1);
            binary.push_back(1);
            break;
        }
    }
}

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
