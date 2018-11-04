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
std::vector <int> binaryVal(std::string val){
    /**
     * Converts a string to its 32 bit representation
     * Returns the integer vector with integers of value 0 or 1
     */
    std::vector<int> binary;

    for(int i = 0; i < I_SIZE; i++){
        int_to_bin(val[i],binary);
    }


    return binary;
}
int bin_to_int(std::vector<int> v){
    /**
     * Converts the given binary representation
     * to its decimal representation.
     */
     int ans=0;
     for(auto i = 0; i < v.size(); i++){
         ans *= 2;
         ans += v[i];
     }

     return ans;
}
std::string int_to_reg(int val){
    switch(val){
        case 0:{
            return "$zero";
        }
        case 1:{
            return "$at";
        }
        case 2:{
            return "$v0";
        }
        case 3:{
            return "$v1";
        }
        case 4:{
            return "$a0";
        }
        case 5:{
            return "$a1";
        }
        case 6:{
            return "$a2";
        }
        case 7:{
            return "$a3";
        }
        case 8:{
            return "$t0";
        }
        case 9:{
            return "$t1";
        }
        case 10:{
            return "$t2";
        }
        case 11:{
            return "$t3";
        }
        case 12:{
            return "$t4";
        }
        case 13:{
            return "$t5";
        }
        case 14:{
            return "$t6";
        }
        case 15:{
            return "$t7";
        }
        case 16:{
            return "$s0";
        }
        case 17:{
            return "$s1";
        }
        case 18:{
            return "$s2";
        }
        case 19:{
            return "$s3";
        }
        case 20:{
            return "$s4";
        }
        case 21:{
            return "$s5";
        }
        case 22:{
            return "$s6";
        }
        case 23:{
            return "$s7";
        }
        case 24:{
            return "$t8";
        }
        case 25:{
            return "$t9";
        }
        case 26:{
            return "$k0";
        }
        case 27:{
            return "$k1";
        }
        case 28:{
            return "$gp";
        }
        case 29:{
            return "$sp";
        }
        case 30:{
            return "$fp";
        }
        case 31:{
            return "$ra";
        }

    }
}
std::string int_to_freg(int val){
    std::string ans = "$f";
    ans += std::to_string(val);
    return ans;
}
std::string to_hex(int val){
    if(val<10){
        return std::to_string(val);
    }
    else{
        switch (val){
            case 10:{
                return "a";
            }
            case 11:{
                return "b";
            }
            case 12:{
                return "c";
            }
            case 13:{
                return "d";
            }
            case 14:{
                return "e";
            }
            case 15:{
                return "f";
            }
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
