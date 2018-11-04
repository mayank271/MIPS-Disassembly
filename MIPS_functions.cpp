#include <regex>
#include <string>
#include <vector>
#include "Header.h"

#define I_SIZE 8

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
 * Methods to process the three types of instructions
 * @param binaryRep
 */
std::vector<int> process_r_type(std::vector<int>binaryRep){
    /**
     * Will return a vector with rs, rt, rd and shamt values in order
     */
        std::vector<int> r;
        r.push_back(bin_to_int(std::vector<int>(binaryRep.begin()+6,binaryRep.begin()+11)));
        r.push_back(bin_to_int(std::vector<int>(binaryRep.begin()+11,binaryRep.begin()+16)));
        r.push_back(bin_to_int(std::vector<int>(binaryRep.begin()+16,binaryRep.begin()+21)));
        r.push_back(bin_to_int(std::vector<int>(binaryRep.begin()+21,binaryRep.begin()+26)));

        return r;
}
std::vector<int> process_i_type(std::vector<int>binaryRep){
    /**
     * Will return a vector with rs, rt and offset values in order
     */
    std::vector<int> r;
    r.push_back(bin_to_int(std::vector<int>(binaryRep.begin()+6,binaryRep.begin()+11)));
    r.push_back(bin_to_int(std::vector<int>(binaryRep.begin()+11,binaryRep.begin()+16)));
    r.push_back(bin_to_int(std::vector<int>(binaryRep.begin()+16,binaryRep.begin()+32)));

    return r;
}
std::string process_j_type(std::vector<int>binaryRep){
    /**
     * Will return a int with offset value in order
     */
    binaryRep.push_back(0);
    binaryRep.push_back(0);
    std::string rep = "0x";
    std::vector<int>tempbinaryRep = std::vector<int>(binaryRep.begin()+6,binaryRep.end());
    int i;
    for(i=0;i<7;i++){
        std::vector<int> temp;
        temp.push_back(tempbinaryRep[i*4]);
        temp.push_back(tempbinaryRep[i*4+1]);
        temp.push_back(tempbinaryRep[i*4+2]);
        temp.push_back(tempbinaryRep[i*4+3]);
        rep += to_hex(bin_to_int(temp));
    }
    return rep;
}


/**
 * Methods to return the answer in the desired format
 * @param command
 * @return the decoded instruction
 */
std::string compute_answer(std::string command){
    std::string a;
    a = command;
    return a;
}
std::string compute_answer(std::string command, std::string var1){
    std::string a;
    a = command;
    a += " ";
    a += var1;
    return a;

}
std::string compute_answer(std::string command, std::string var1, std::string var2){
    std::string a;
    a = command;
    a += " ";
    a += var1;
    a += ", ";
    a += var2;
    return a;

}
std::string compute_answer(std::string command, std::string var1, std::string var2, std::string var3){
    std::string a;
    a = command;
    a += " ";
    a += var1;
    a += ", ";
    a += var2;
    a += ", ";
    a += var3;
    return a;

}
std::string compute_answer_base(std::string command, std::string var1, std::string var2, std::string var3){
    std::string a;
    a = command;
    a += " ";
    a += var1;
    a += ", ";
    a += var2;
    a += "(";
    a += var3;
    a += ")";
    return a;
}


/**
 * References :
 * 1. http://alumni.cs.ucr.edu/~vladimir/cs161/mips.html
 * 2. https://inst.eecs.berkeley.edu/~cs61c/resources/MIPS_help.html
 * 3. https://en.wikibooks.org/wiki/MIPS_Assembly/Instruction_Formats
 * 4. The MIPS32™ Architecture For Programmers Volume II
 * @param opc : Value of Opcode
 * @param binaryRep : Binary Representation of the given instruction
 * @return vector containing two strings - instruction type and the decoded instruction.
 */
std::vector<std::string> decode_opcode(int opc, std::vector<int>binaryRep){

     std::vector<std::string> decoded;
     std::string answer;
     std::string type;

     switch(opc){

         case 0:{
             /**
              * Special case - opcode is zero
              */
             std::vector<int> temp (binaryRep.end()-6, binaryRep.end());
             int funcval = bin_to_int(temp);
             switch(funcval){
                 case 0:{
                     /**
                      * sll instruction (shift left logical)
                      * format : sll rd, rt, shamt
                      * operation : r[rd] <- r[rt] << shamt
                      */
                      type = "R";
                      std::vector<int> r_val = process_r_type(binaryRep);
                      answer = compute_answer("sll", int_to_reg(r_val[2]), int_to_reg(r_val[1]), std::to_string(r_val[3]));
                      break;
                 }
                 case 2:{
                     /**
                      * srl instruction (unsigned right shift)
                      * format : srl rd, rt, shamt
                      * operation : r[rd] <- r[rt] >> shamt
                      */
                      type = "R";
                      std::vector<int> r_val = process_r_type(binaryRep);
                      answer = compute_answer("srl", int_to_reg(r_val[2]), int_to_reg(r_val[1]), std::to_string(r_val[3]));
                      break;
                 }
                 case 3:{
                     /**
                      * sra instruction (signed right shift)
                      * format : sra rd, rt, shamt
                      * operation : r[rd] <- r[rt] >> shamt
                      */
                      type = "R";
                      std::vector<int> r_val = process_r_type(binaryRep);
                      answer = compute_answer("sra", int_to_reg(r_val[2]), int_to_reg(r_val[1]), std::to_string(r_val[3]));
                      break;
                 }
                 case 4:{
                     /**
                      * sllv instruction (shift word logical left variable)
                      * format : sllv rd, rt, rs
                      * operation : r[rd] <- r[rt] << r[rs]
                      */
                      type = "R";
                      std::vector<int> r_val = process_r_type(binaryRep);
                      answer = compute_answer("sllv", int_to_reg(r_val[2]), int_to_reg(r_val[1]), int_to_reg(r_val[0]));
                      break;
                 }
                 case 6:{
                     /**
                       * srlv instruction (shift word logical right variable)
                       * format : srlv rd, rt, rs (unsigned right shift)
                       * operation : r[rd] <- r[rt] >> r[rs]
                       */
                       type = "R";
                       std::vector<int> r_val = process_r_type(binaryRep);
                       answer = compute_answer("srlv", int_to_reg(r_val[2]), int_to_reg(r_val[1]), int_to_reg(r_val[0]));
                       break;
                 }
                 case 7:{
                     /**
                       * srav instruction (signed right shift)
                       * format : srav rd, rt, rs
                       * operation : r[rd] <- r[rt] >> r[rs]
                       */
                       type = "R";
                       std::vector<int> r_val = process_r_type(binaryRep);
                       answer = compute_answer("srav", int_to_reg(r_val[2]), int_to_reg(r_val[1]), int_to_reg(r_val[0]));
                       break;
                 }
                 case 8:{
                     /**
                      * jr instruction (jump to address in register)
                      * format : jr rs
                      * Note - r[rs] should be a multiple of 4
                      * operation : PC <- r[rs]
                      */
                      type = "R";
                      std::vector<int> r_val = process_r_type(binaryRep);
                      answer = compute_answer("jr", int_to_reg(r_val[0]));
                      break;
                 }
                 case 9:{
                     /**
                      * jalr instruction (jump and link register)
                      * format : jalr rd, rs
                      *         or jalr rs (where rd = 31 implied)
                      * operation : tmp <- r[rs]
                      *         r[rd] <- return address (PC + 8)
                      *         PC <- tmp
                      */
                      type = "R";
                      std::vector<int> r_val = process_r_type(binaryRep);
                      if(r_val[2]==31) {
                         answer = compute_answer("jalr", int_to_reg(r_val[0]));
                      }
                      else{
                         answer = answer = compute_answer("jalr", int_to_reg(r_val[2]), int_to_reg(r_val[0]));
                      }
                      break;
                 }
                 case 12:{
                     /**
                      * system call instruction
                      * format : syscall
                      * operation : System Call
                      */
                      type = "R";
                      answer = compute_answer("syscall");
                      break;
                 }
                 case 13:{
                     /**
                      * break instruction
                      * format : break
                      * operation : Breakpoint exception
                      */
                     type = "R";
                     answer = compute_answer("break");
                     break;
                 }
                 case 15:{
                     /**
                      * sync instruction (synchronize shared memory)
                      * format : sync
                      * operation : To order loads and stores
                      */
                     type = "R";
                     answer = compute_answer("sync");
                     break;
                 }
                 case 16:{
                     /**
                      * mfhi instruction (move from HI register)
                      * format : mfhi rd
                      * operation : rd <- HI
                      */
                      type = "R";
                      std::vector<int> r_val = process_r_type(binaryRep);
                      answer = compute_answer("mfhi", int_to_reg(r_val[2]));
                      break;
                 }
                 case 17:{
                     /**
                      * mthi instruction (move to HI register)
                      * format : mthi rs
                      * operation : HI <- rs
                      */
                      type = "R";
                      std::vector<int> r_val = process_r_type(binaryRep);
                      answer = compute_answer("mthi", int_to_reg(r_val[0]));
                      break;
                 }
                 case 18:{
                     /**
                      * mflo instruction (move from LO register)
                      * format : mflo rd
                      * operation : rd <- LI
                      */
                      type = "R";
                      std::vector<int> r_val = process_r_type(binaryRep);
                      answer = compute_answer("mflo", int_to_reg(r_val[2]));
                      break;
                 }
                 case 19:{
                     /**
                      * mtlo instruction (move to LO register)
                      * format : mtlo rs
                      * operation : LO <- rs
                      */
                      type = "R";
                      std::vector<int> r_val = process_r_type(binaryRep);
                      answer = compute_answer("mtlo", int_to_reg(r_val[0]));
                      break;
                 }
                 case 24:{
                     /**
                      * mult instruction (multiply word) [signed]
                      * format : mult rs, rt
                      * operation : (LO, HI) <- r[rs] x r[rt]
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("mult", int_to_reg(r_val[0]), int_to_reg(r_val[1]));
                     break;
                 }
                 case 25:{
                     /**
                      * multu instruction (multiply word) [unsigned]
                      * format : multu rs, rt
                      * operation : (LO, HI) <- r[rs] x r[rt]
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("multu", int_to_reg(r_val[0]), int_to_reg(r_val[1]));
                     break;
                 }
                 case 26:{
                     /**
                      * div instruction (divide word) [signed]
                      * format : div rs, rt
                      * operation : LO <- r[rs] / r[rt]
                      *         HO <- r[rs] % r[rt]
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("div", int_to_reg(r_val[0]), int_to_reg(r_val[1]));
                     break;
                 }
                 case 27:{
                     /**
                      * divu instruction (divide word) [unsigned]
                      * format : divu rs, rt
                      * operation : LO <- r[rs] / r[rt]
                      *         HO <- r[rs] % r[rt]
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("divu", int_to_reg(r_val[0]), int_to_reg(r_val[1]));
                     break;
                 }
                 case 32:{
                     /**
                      * add instruction [exception on signed overflow]
                      * format : add rd, rs, rt
                      * operation : r[rd] <- r[rs] + r[rt]
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("add",int_to_reg(r_val[2]),int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 33:{
                     /**
                      * addu instruction
                      * format : addu rd, rs, rt
                      * operation : r[rd] <- r[rs] + r[rt]
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("addu",int_to_reg(r_val[2]),int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 34:{
                     /**
                      * sub instruction [exception on signed overflow]
                      * format : sub rd, rs, rt
                      * operation : r[rd] <- r[rs] - r[rt]
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("sub",int_to_reg(r_val[2]),int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 35:{
                     /**
                      * subu instruction
                      * format : subu rd, rs, rt
                      * operation : r[rd] <- r[rs] - r[rt]
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("subu",int_to_reg(r_val[2]),int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 36:{
                     /**
                      * and instruction (bitwise logical AND)
                      * format : and rd, rs, rt
                      * operation : r[rd] <- r[rs] AND r[rt]
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("and",int_to_reg(r_val[2]),int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 37:{
                     /**
                      * or instruction (bitwise logical OR)
                      * format : or rd, rs, rt
                      * operation : r[rd] <- r[rs] OR r[rt]
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("or",int_to_reg(r_val[2]),int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 38:{
                     /**
                      * xor instruction (bitwise logical XOR)
                      * format : xor rd, rs, rt
                      * operation : r[rd] <- r[rs] ^ r[rt]
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("xor",int_to_reg(r_val[2]),int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 39:{
                     /**
                      * nor instruction (bitwise logical NOR)
                      * format : nor rd, rs, rt
                      * operation : r[rd] <- !(r[rs] | r[rt] )
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("nor",int_to_reg(r_val[2]),int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }

                 case 42:{
                     /**
                      * slt instruction (set on less than) [signed comparison]
                      * format : slt rd, rs, rt
                      * operation : r[rd] <- (r[rs] < r[rt])
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("slt",int_to_reg(r_val[2]),int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 43:{
                     /**
                      * sltu instruction (set on less than) [unsigned comparison]
                      * format : sltu rd, rs, rt
                      * operation : r[rd] <- (r[rs] < r[rt])
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("sltu",int_to_reg(r_val[2]),int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 48:{
                     /**
                      * tge instruction (trap if greater or equal)
                      * format : tge rs, rt
                      * operation : if (r[rs] >= r[rt]) then Trap
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("tge",int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 49:{
                     /**
                      * tgeu instruction (trap if greater or equal unsigned)
                      * format : tgeu rs, rt
                      * operation : if (r[rs] >= r[rt]) then Trap
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("tgeu",int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 50:{
                     /**
                      * tlt instruction (trap if less than)
                      * format : tlt rs, rt
                      * operation : if (r[rs] < r[rt]) then Trap
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("tlt",int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 51:{
                     /**
                      * tltu instruction (trap if less than unsigned)
                      * format : tltu rs, rt
                      * operation : if (r[rs] < r[rt]) then Trap
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("tltu",int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 52:{
                     /**
                      * teq instruction (trap if equal)
                      * format : teq rs, rt
                      * operation : if (r[rs] = r[rt]) then Trap
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("teq",int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 case 54:{
                     /**
                      * tne instruction (trap if not equal)
                      * format : tne rs, rt
                      * operation : if (r[rs] != r[rt]) then Trap
                      */
                     type = "R";
                     std::vector<int> r_val = process_r_type(binaryRep);
                     answer = compute_answer("tne",int_to_reg(r_val[0]),int_to_reg(r_val[1]));
                     break;
                 }
                 default:{
                     answer += "Invslid R-type Instruction.";
                     break;
                 }
             }
             break;
         }
         case 1:{
             /**
              * the values differ in rt values
              * all instructions are I type
              */
             std::vector<int> temp (binaryRep.begin()+11, binaryRep.begin()+16);
             type = "I";
             switch(bin_to_int(temp)){
                 case 0:{
                     /**
                      * bltz instruction (branch on less than zero)
                      * format : bltz rs, offset
                      * operation : 1. target_offset <- sign_extended(offset)
                      *                 condition <- gpr[rs] < 0
                      *             2. if condition then
                      *                   PC <- PC + target_offset
                      *                endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("bltz", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 1:{
                     /**
                      * bgez instruction (branch on greater than or equal to zero)
                      * format : bgez rs, offset
                      * operation : 1. target_offset <- sign_extended(offset)
                      *                 condition <- gpr[rs] >= 0
                      *             2. if condition then
                      *                   PC <- PC + target_offset
                      *                endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("bgez", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 2:{
                     /**
                      * bltzl instruction (branch on less than zero likely)
                      * format : bltzl rs, offset
                      * operation : 1. target_offset <- sign_extended(offset)
                      *                 condition <- gpr[rs] < 0
                      *             2. if condition then
                      *                   PC <- PC + target_offset
                      *                else
                      *                    NullifyCurrentInstruction()
                      *                endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("bltzl", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 3:{
                     /**
                      * bgezl instruction (branch on greater than or equal to zero likely)
                      * format : bgezl rs, offset
                      * operation : 1. target_offset <- sign_extended(offset)
                      *                 condition <- gpr[rs] >= 0
                      *             2. if condition then
                      *                   PC <- PC + target_offset
                      *                else
                      *                    NullifyCurrentInstruction()
                      *                endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("bgezl", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 8:{
                     /**
                      * tgei instruction (trap if greater or equal immediate)
                      * format : tgei rs, immediate
                      * operation : if gpr[rs] >= sign_extended(immediate) then
                      *                 SignalException(Trap)
                      *             endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("tgei", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 9:{
                     /**
                      * tgeiu instruction (trap if greater or equal immediate unsigned)
                      * format : tgeiu rs, immediate
                      * operation : if ( 0 || gpr[rs]) >= (0 || sign_extended(immediate)) then
                      *                 SignalException(Trap)
                      *             endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("tgeiu", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 10:{
                     /**
                      * tlti instruction (trap if less than immediate)
                      * format : tlti rs, immediate
                      * operation : if gpr[rs] < sign_extended(immediate) then
                      *                 SignalException(Trap)
                      *             endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("tlti", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 11:{
                     /**
                      * tltiu instruction (trap if less than immediate unsigned)
                      * format : tltiu rs, immediate
                      * operation : if ( 0 || gpr[rs]) < (0 || sign_extended(immediate)) then
                      *                 SignalException(Trap)
                      *             endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("tltiu", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 12:{
                     /**
                      * teqi instruction (trap if equal immediate)
                      * format : teqi rs, immediate
                      * operation : if gpr[rs] = sign_extended(immediate) then
                      *                 SignalException(Trap)
                      *             endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("teqi", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 14:{
                     /**
                      * tnei instruction (trap if not equal)
                      * format : tnei rs, immediate
                      * operation : if gpr[rs] != sign_extended(immediate) then
                      *                 SignalException(Trap)
                      *             endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("tnei", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 16:{
                     /**
                      * bltzal instruction (branch on less than zero and link)
                      * format : bltzal rs, offset
                      * operation : 1. target_offset <- sign_extended(offset)
                      *                 condition <- gpr[rs] < 0
                      *                 gpr[31] <- PC + 8
                      *             2. if condition then
                      *                   PC <- PC + target_offset
                      *                endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("bltzal", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 17:{
                     /**
                      * bgezal instruction (branch on greater than or equal to zero and link)
                      * format : bgezal rs, offset
                      * operation : 1. target_offset <- sign_extended(offset)
                      *                 condition <- gpr[rs] >= 0
                      *                 gpr[31] <- PC + 8
                      *             2. if condition then
                      *                   PC <- PC + target_offset
                      *                endif
                      */
                      std::vector <int> i_val = process_i_type(binaryRep);
                      answer = compute_answer("bgezal", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                      break;
                 }
                 case 18:{
                     /**
                      * bltzall instruction (branch on less than zero and link likely)
                      * format : bltzall rs, offset
                      * operation : 1. target_offset <- sign_extended(offset)
                      *                 condition <- gpr[rs] < 0
                      *                 gpr[31] <- PC + 8
                      *             2. if condition then
                      *                   PC <- PC + target_offset
                      *                else
                      *                    NullifyCurrentInstruction()
                      *                endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("bltzall", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 case 19:{
                     /**
                      * bgezall instruction (branch on greater than or equal to zero and link likely)
                      * format : bgezall rs, offset
                      * operation : 1. target_offset <- sign_extended(offset)
                      *                 condition <- gpr[rs] >= 0
                      *                 gpr[31] <- PC + 8
                      *             2. if condition then
                      *                   PC <- PC + target_offset
                      *                else
                      *                    NullifyCurrentInstruction()
                      *                endif
                      */
                     std::vector <int> i_val = process_i_type(binaryRep);
                     answer = compute_answer("bgezall", int_to_reg(i_val[0]), std::to_string(i_val[2]));
                     break;
                 }
                 default:{
                     answer = "Invalid I-type Instruction.";
                 }
             }
             break;
         }
         case 2:{
             /**
              * j instruction (jump)
              * format : j target
              * operation : PC <- PC(4 upper bits from the instruction in delay slot) || 26 bit address || 00
              */
              type = "J";
              answer = compute_answer("j",process_j_type(binaryRep));
              break;
         }
         case 3:{
             /**
              * jal instruction (jump and link)
              * format : jal target
              * operation : 1. gpr[31] <- PC + 8
              *             2. PC <- PC(4 upper bits from the instruction in delay slot) || 26 bit address || 00
              */
             type = "J";
             answer = compute_answer("jal",process_j_type(binaryRep));
             break;
         }
         case 4:{
             /**
              * beq instruction (branch on equal)
              * format : beq rs, rt, offset
              * operation : 1. target_offset <- sign_extended(offset)
              *                condition <- (gpr[rs] = pgr[rt])
              *             2. if condition then
              *                     PC <- PC + target_offset
              */
              type = "I";
              std::vector<int> i_val = process_i_type(binaryRep);
              answer = compute_answer("beq",int_to_reg(i_val[0]),int_to_reg(i_val[1]),std::to_string(i_val[2]));
              break;
         }
         case 5:{
             /**
              * bne instruction (branch on not equal)
              * format : bne rs, rt, offset
              * operation : 1. target_offset <- sign_extended(offset)
              *                condition <- (gpr[rs] != pgr[rt])
              *             2. if condition then
              *                     PC <- PC + target_offset
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("bne", int_to_reg(i_val[0]), int_to_reg(i_val[1]), std::to_string(i_val[2]));
             break;
         }
         case 6:{
             /**
              * blez instruction (branch on less than or equal to zero) [signed comparison]
              * format : blez rs, offset  [rt is 00000]
              * operation : 1. target_offset <- sign_extended(offset)
              *                condition <- (gpr[rs] <= 0)
              *             2. if condition then
              *                     PC <- PC + target_offset
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             if(i_val[1]==0){
                answer = compute_answer("blez",int_to_reg(i_val[0]),std::to_string(i_val[2]));
             }else{
                 answer = "Invalid blez instruction.";
             }
             break;
         }
         case 7:{
             /**
              * bgtz instruction (branch on greater than zero) [signed comparison]
              * format : bgtz rs, offset  [rt = 00000]
              * operation : 1. target_offset <- sign_extended(offset)
              *                condition <- (gpr[rs] > 0)
              *             2. if condition then
              *                     PC <- PC + target_offset
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             if(i_val[1]==0){
                 answer = compute_answer("bgtz",int_to_reg(i_val[0]),std::to_string(i_val[2]));
             }else{
                 answer += "Invalid bgtz instruction.";
             }
             break;
         }
         case 8:{
             /**
              * addi instruction (add immediate) [Exception on signed overflow]
              * format : addi rt, rs, immediate
              * operation : rt <- rs + immediate
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("addi",int_to_reg(i_val[1]),int_to_reg(i_val[0]),std::to_string(i_val[2]));
             break;
         }
         case 9:{
             /**
              * addiu instruction (add immediate unsigned word)
              * format : addiu rt, rs, immediate
              * operation : rt <- rs + immediate
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("addiu",int_to_reg(i_val[1]),int_to_reg(i_val[0]),std::to_string(i_val[2]));
             break;
         }
         case 10:{
             /**
              * slti instruction (set on less than immediate) [Signed Comparison]
              * format : slti rt, rs, immediate
              * operation : rt <- (rs < immediate)
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("slti",int_to_reg(i_val[1]),int_to_reg(i_val[0]),std::to_string(i_val[2]));
             break;
         }
         case 11:{
             /**
              * sltiu instruction (set on less than immediate unsigned word) [Unsigned Comparison]
              * format : sltiu rt, rs, immediate
              * operation : rt <- (rs < immediate)
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("sltiu",int_to_reg(i_val[1]),int_to_reg(i_val[0]),std::to_string(i_val[2]));
             break;
         }
         case 12:{
             /**
              * andi instruction (and immediate)
              * format : andi rt, rs, immediate
              * operation : gpr[rt] <- gpr[rs] AND zero_extend(immediate)
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("andi",int_to_reg(i_val[1]),int_to_reg(i_val[0]),std::to_string(i_val[2]));
             break;
         }
         case 13:{
             /**
              * ori instruction (or immediate)
              * format : ori rt, rs, immediate
              * operation : gpr[rt] <- gpr[rs] OR zero_extend(immediate)
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("ori",int_to_reg(i_val[1]),int_to_reg(i_val[0]),std::to_string(i_val[2]));
             break;
         }
         case 14:{
             /**
              * xori instruction (xor immediate)
              * format : xori rt, rs, immediate
              * operation : gpr[rt] <- gpr[rs] ^ zero_extend(immediate)
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("xori",int_to_reg(i_val[1]),int_to_reg(i_val[0]),std::to_string(i_val[2]));
             break;
         }
         case 15:{
             /**
              * lui instruction (load upper immediate)
              * format : lui rt, immediate [rs = 00000]
              * operation : gpr[rt] <- immediate || 0....16zeroes
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             if(i_val[0]==0){
                 answer = compute_answer("lui",int_to_reg(i_val[1]),std::to_string(i_val[2]));
             }else{
                 answer = "Invalid lui instruction.";
             }
             break;
         }
         case 16:{
             type = "R";
              std::vector<int> r_val = process_r_type(binaryRep);
             if(r_val[0]==0){
                 /**
                  * mfc0 instruction (move from coprocessor 0)
                  * format : mfc0 rt, rd
                  * operation : data <- cpr [0,rd,sel]
                  *             gpr[rt] <- data
                  *             (moves all contents of a coprocessor 0 register to a general register)
                  */
                 answer = compute_answer("mfc0",int_to_reg(r_val[1]),int_to_freg(r_val[2]));
             }else{
                 if(r_val[0]==4){
                 /**
                  * mtc0 instruction (move to coprocessor 0)
                  * format : mtc0 rt, rd
                  * operation : cpr[0,rd,sel] <- data
                  *             (moves contents of a general register to coprocessor 0 register)
                  */
                 answer = compute_answer("mtc0",int_to_reg(r_val[1]),int_to_freg(r_val[2]));
                 }
                 else{

                     /**
                      * Would be a TLB instruction
                      */
                     switch (bin_to_int(binaryRep)){
                         case 1107296257: {
                             /**
                              * corresponds to 010000 1 0000000000000000000 000001
                              * which stands for TLBR instruction (Read indexed TLB entry)
                              */
                             answer = compute_answer("tlbr");
                             break;
                         }
                         case 1107296258: {
                             /**
                              * corresponds to 010000 1 0000000000000000000 000010
                              * which stands for TLBWI instruction (Write indexed TLB entry)
                              */
                             answer = compute_answer("tlbwi");
                             break;
                         }
                         case 1107296262: {
                             /**
                              * corresponds to 010000 1 0000000000000000000 000110
                              * which stands for TLBWR instruction (Write random TLB entry)
                              */
                             answer = compute_answer("tlbwr");
                             break;
                         }
                         case 1107296280:{
                             /**
                              * corresponds to 010000 1 0000000000000000000 011000
                              * which stands for ERET (Exception Return)
                              */
                             answer = compute_answer("eret");
                             break;
                         }
                         case 1107296287:{
                             /**
                              * corresponds to 010000 1 0000000000000000000 011111
                              * which stands for DERET (Debug Exception Return)
                              */
                             answer = compute_answer("deret");
                             break;
                         }
                         case 1107296288: {
                             /**
                              * corresponds to 010000 1 0000000000000000000 100000
                              * which stands for WAIT (Enter standby mode)
                              */
                             answer = compute_answer("wait");
                             break;
                         }
                         default:{
                             answer = "Invalid instruction";
                             break;
                         }
                     }
                 }
             }

             break;
         }
         case 17:{
            std::vector<int> fr_val = process_r_type(binaryRep);
            switch(fr_val[0]){
                /**
                 * fr_val[0] has the fmt value of a floating point instruction
                 */
                case 8:{
                    switch (fr_val[1]){
                        case 0:{
                            /**
                             * bc1f instruction (branch on fp false)
                             * format : bc1f offset (assuming cc = 0)
                             */
                             type = "FI";
                             std::vector<int> fi_val = process_i_type(binaryRep);
                             answer = compute_answer("bc1f",std::to_string(fi_val[2]));
                             break;
                        }
                        case 1:{
                            /**
                             * bc1t instruction (branch on fp true)
                             * format : bc1t offset (assuming cc = 0)
                             */
                            type = "FI";
                            std::vector<int> fi_val = process_i_type(binaryRep);
                            answer = compute_answer("bc1t",std::to_string(fi_val[2]));
                            break;
                        }
                        default:{
                            answer = "Invalid FI Instruction type";
                            break;
                        }
                    }
                    break;
                }
                case 16:{
                    type = "FR";
                    std::vector<int> funcval(binaryRep.end()-6,binaryRep.end());
                    switch(bin_to_int(funcval)){
                        case 0:{
                            /**
                             * add.s instruction(FP add single)
                             * format : add.s fd, fs, ft
                             * operation : fd <- fs + ft
                             */
                             answer = compute_answer("add.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]),int_to_freg(fr_val[1]));
                             break;
                        }
                        case 1:{
                            /**
                             * sub.s instruction(FP sub single)
                             * format : sub.s fd, fs, ft
                             * operation : fd <- fs - ft
                             */
                            answer = compute_answer("sub.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]),int_to_freg(fr_val[1]));
                            break;
                        }
                        case 2:{
                            /**
                             * mul.s instruction(FP multiply single)
                             * format : mul.s fd, fs, ft
                             * operation : fd <- fs x ft
                             */
                            answer = compute_answer("mul.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]),int_to_freg(fr_val[1]));
                            break;
                        }
                        case 3:{
                            /**
                             * div.s instruction(FP divide single)
                             * format : div.s fd, fs, ft
                             * operation : fd <- fs / ft
                             */
                            answer = compute_answer("div.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]),int_to_freg(fr_val[1]));
                            break;
                        }
                        case 4:{
                            /**
                             * sqrt.s instruction (floating point square root)
                             * format : sqrt.s fd, fs
                             * operation : fd <- SQRT(fs)
                             */
                             answer = compute_answer("sqrt.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]));
                             break;
                        }
                        case 5:{
                            /**
                             * abs.s instruction (floating point absolute value)
                             * format : abs.s fd, fs
                             * operation : fd <- ABS(fs)
                             */
                            answer = compute_answer("abs.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]));
                            break;
                        }
                        case 6:{
                            /**
                             * mov.s instruction (floating point move)
                             * format : mov.s fd, fs
                             * operation : fd <- fs
                             */
                            answer = compute_answer("mov.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]));
                            break;
                        }
                        case 7:{
                            /**
                             * neg.s instruction (floating point negate)
                             * format : neg.s fd, fs
                             * operation : fd <- -fs
                             */
                            answer = compute_answer("neg.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]));
                            break;
                        }
                        case 12:{
                            /**
                             * round.w.s instruction (floating point round to word fixed point)
                             * format : round.w.s fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer = compute_answer("round.w.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]));
                            break;
                        }
                        case 13:{
                            /**
                             * trunc.w.s instruction (floating point truncate to word fixed point)
                             * format : trunc.w.s fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer = compute_answer("trunc.w.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]));
                            break;
                        }
                        case 14:{
                            /**
                             * ceil.w.s instruction (floating point ceiling convert to word fixed point)
                             * format : ceil.w.s fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer = compute_answer("ceil.w.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]));
                            break;
                        }
                        case 15:{
                            /**
                             * floor.w.s instruction (floating point floor convert to word fixed point)
                             * format : floor.w.s fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer = compute_answer("floor.w.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]));
                            break;
                        }
                        case 18:{
                            /**
                             * movz.s instruction (floating point move conditional on zero)
                             * format : movz.s fd, fs, rt
                             * operation : if rt = 0  then fd <- fs
                             */
                            answer = compute_answer("movz.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 19:{
                            /**
                             * movn.s instruction (floating point move conditional on not zero)
                             * format : movn.s fd, fs, rt
                             * operation : if rt != 0  then fd <- fs
                             */
                            answer = compute_answer("movn.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 32:{
                            /**
                             * cvt.s.s instruction (floating point convert to single floating point)
                             * format : cvt.s.s fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer =compute_answer("cvt.s.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]));
                            break;
                        }
                        case 33:{
                            /**
                             * cvt.d.s instruction (floating point convert to double floating point)
                             * format : cvt.d.s fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer =compute_answer("cvt.d.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]));
                            break;
                        }
                        case 36:{
                            /**
                             * cvt.w.s instruction (floating point convert to word fixed point)
                             * format : cvt.w.s fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer =compute_answer("cvt.w.s",int_to_freg(fr_val[3]),int_to_freg(fr_val[2]));
                            break;
                        }
                        /**
                         * floating point comparisons
                         */
                        case 48:{
                            /**
                             * c.f.s instruction
                             * format : c.f.s fs, ft
                             */
                            answer = compute_answer("c.f.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 49:{
                            /**
                             * c.un.s instruction
                             * format : c.un.s fs, ft
                             */
                            answer = compute_answer("c.un.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 50:{
                            /**
                             * c.eq.s instruction(testing for equality)
                             * format : c.eq.s fs, ft (cc = 0 implied)
                             * operation : cc <- (fs == ft)
                             */
                            answer = compute_answer("c.eq.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 51:{
                            /**
                             * c.ueq.s instruction
                             * format : c.ueq.s fs, ft
                             */
                            answer = compute_answer("c.ueq.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 52:{
                            /**
                             * c.olt.s instruction
                             * format : c.olt.s fs, ft
                             */
                            answer = compute_answer("c.olt.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 53:{
                            /**
                             * c.ult.s instruction
                             * format : c.ult.s fs, ft
                             */
                            answer = compute_answer("c.ult.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 54:{
                            /**
                             * c.ole.s instruction
                             * format : c.ole.s fs, ft
                             */
                            answer = compute_answer("c.ole.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 55:{
                            /**
                             * c.ule.s instruction
                             * format : c.ule.s fs, ft
                             */
                            answer = compute_answer("c.ule.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 56:{
                            /**
                             * c.sf.s instruction
                             * format : c.sf.s fs, ft
                             */
                            answer = compute_answer("c.sf.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 57:{
                            /**
                             * c.ngle.s instruction
                             * format : c.ngle.s fs, ft
                             */
                            answer = compute_answer("c.ngle.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 58:{
                            /**
                             * c.seq.s instruction
                             * format : c.seq.s fs, ft
                             */
                            answer = compute_answer("c.seq.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 59:{
                            /**
                             * c.ngl.s instruction
                             * format : c.ngl.s fs, ft
                             */
                            answer = compute_answer("c.ngl.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 60:{
                            /**
                             * c.lt.s instruction
                             * format : c.lt.s fs, ft (cc = 0 implied)
                             * operation : cc <- (fs < ft)
                             */
                            answer = compute_answer("c.lt.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 61:{
                            /**
                             * c.nge.s instruction
                             * format : c.nge.s fs, ft
                             */
                            answer = compute_answer("c.nge.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 62:{
                            /**
                             * c.le.s instruction
                             * format : c.le.s fs, ft (cc = 0 implied)
                             * operation : cc <- (fs <= ft)
                             */
                            answer = compute_answer("c.le.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                        case 63:{
                            /**
                             * c.ngt.s instruction
                             * format : c.ngt.s fs, ft
                             */
                            answer = compute_answer("c.ngt.s",int_to_reg(fr_val[2]),int_to_reg(fr_val[1]));
                            break;
                        }
                    }
                    break;
                }
                case 17: {
                    type = "FR";
                    std::vector<int> funcval(binaryRep.end() - 6, binaryRep.end());
                    switch (bin_to_int(funcval)) {
                        case 0: {
                            /**
                             * add.d instruction(FP add single)
                             * format : add.d fd, fs, ft
                             * operation : fd <- fs + ft
                             */
                            answer = compute_answer("add.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]),
                                                    int_to_freg(fr_val[1]));
                            break;
                        }
                        case 1: {
                            /**
                             * sub.d instruction(FP sub single)
                             * format : sub.d fd, fs, ft
                             * operation : fd <- fs - ft
                             */
                            answer = compute_answer("sub.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]),
                                                    int_to_freg(fr_val[1]));
                            break;
                        }
                        case 2: {
                            /**
                             * mul.d instruction(FP multiply single)
                             * format : mul.d fd, fs, ft
                             * operation : fd <- fs x ft
                             */
                            answer = compute_answer("mul.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]),
                                                    int_to_freg(fr_val[1]));
                            break;
                        }
                        case 3: {
                            /**
                             * div.d instruction(FP divide single)
                             * format : div.d fd, fs, ft
                             * operation : fd <- fs / ft
                             */
                            answer = compute_answer("div.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]),
                                                    int_to_freg(fr_val[1]));
                            break;
                        }
                        case 4: {
                            /**
                             * sqrt.d instruction (floating point square root)
                             * format : sqrt.d fd, fs
                             * operation : fd <- SQRT(fs)
                             */
                            answer = compute_answer("sqrt.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]));
                            break;
                        }
                        case 5: {
                            /**
                             * abs.d instruction (floating point absolute value)
                             * format : abs.d fd, fs
                             * operation : fd <- ABS(fs)
                             */
                            answer = compute_answer("abs.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]));
                            break;
                        }
                        case 6: {
                            /**
                             * mov.d instruction (floating point move)
                             * format : mov.d fd, fs
                             * operation : fd <- fs
                             */
                            answer = compute_answer("mov.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]));
                            break;
                        }
                        case 7: {
                            /**
                             * neg.d instruction (floating point negate)
                             * format : neg.d fd, fs
                             * operation : fd <- -fs
                             */
                            answer = compute_answer("neg.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]));
                            break;
                        }
                        case 12: {
                            /**
                             * round.w.d instruction (floating point round to word fixed point)
                             * format : round.w.d fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer = compute_answer("round.w.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]));
                            break;
                        }
                        case 13: {
                            /**
                             * trunc.w.d instruction (floating point truncate to word fixed point)
                             * format : trunc.w.d fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer = compute_answer("trunc.w.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]));
                            break;
                        }
                        case 14: {
                            /**
                             * ceil.w.d instruction (floating point ceiling convert to word fixed point)
                             * format : ceil.w.d fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer = compute_answer("ceil.w.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]));
                            break;
                        }
                        case 15: {
                            /**
                             * floor.w.d instruction (floating point floor convert to word fixed point)
                             * format : floor.w.d fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer = compute_answer("floor.w.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]));
                            break;
                        }
                        case 18: {
                            /**
                             * movz.d instruction (floating point move conditional on zero)
                             * format : movz.d fd, fs, rt
                             * operation : if rt = 0  then fd <- fs
                             */
                            answer = compute_answer("movz.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]),
                                                    int_to_reg(fr_val[1]));
                            break;
                        }
                        case 19: {
                            /**
                             * movn.d instruction (floating point move conditional on not zero)
                             * format : movn.d fd, fs, rt
                             * operation : if rt != 0  then fd <- fs
                             */
                            answer = compute_answer("movn.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]),
                                                    int_to_reg(fr_val[1]));
                            break;
                        }
                        case 32: {
                            /**
                             * cvt.d.d instruction (floating point convert to single floating point)
                             * format : cvt.d.d fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer = compute_answer("cvt.d.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]));
                            break;
                        }
                        case 33: {
                            /**
                             * cvt.d.d instruction (floating point convert to double floating point)
                             * format : cvt.d.d fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer = compute_answer("cvt.d.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]));
                            break;
                        }
                        case 36: {
                            /**
                             * cvt.w.d instruction (floating point convert to word fixed point)
                             * format : cvt.w.d fd, fs
                             * operation : fd <- convert_and_round(fs)
                             */
                            answer = compute_answer("cvt.w.d", int_to_freg(fr_val[3]), int_to_freg(fr_val[2]));
                            break;
                        }
                            /**
                             * floating point comparisons
                             */
                        case 48: {
                            /**
                             * c.f.d instruction
                             * format : c.f.d fs, ft
                             */
                            answer = compute_answer("c.f.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 49: {
                            /**
                             * c.un.d instruction
                             * format : c.un.d fs, ft
                             */
                            answer = compute_answer("c.un.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 50: {
                            /**
                             * c.eq.d instruction(testing for equality)
                             * format : c.eq.d fs, ft (cc = 0 implied)
                             * operation : cc <- (fs == ft)
                             */
                            answer = compute_answer("c.eq.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 51: {
                            /**
                             * c.ueq.d instruction
                             * format : c.ueq.d fs, ft
                             */
                            answer = compute_answer("c.ueq.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 52: {
                            /**
                             * c.olt.d instruction
                             * format : c.olt.d fs, ft
                             */
                            answer = compute_answer("c.olt.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 53: {
                            /**
                             * c.ult.d instruction
                             * format : c.ult.d fs, ft
                             */
                            answer = compute_answer("c.ult.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 54: {
                            /**
                             * c.ole.d instruction
                             * format : c.ole.d fs, ft
                             */
                            answer = compute_answer("c.ole.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 55: {
                            /**
                             * c.ule.d instruction
                             * format : c.ule.d fs, ft
                             */
                            answer = compute_answer("c.ule.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 56: {
                            /**
                             * c.df.d instruction
                             * format : c.df.d fs, ft
                             */
                            answer = compute_answer("c.df.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 57: {
                            /**
                             * c.ngle.d instruction
                             * format : c.ngle.d fs, ft
                             */
                            answer = compute_answer("c.ngle.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 58: {
                            /**
                             * c.deq.d instruction
                             * format : c.deq.d fs, ft
                             */
                            answer = compute_answer("c.deq.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 59: {
                            /**
                             * c.ngl.d instruction
                             * format : c.ngl.d fs, ft
                             */
                            answer = compute_answer("c.ngl.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 60: {
                            /**
                             * c.lt.d instruction
                             * format : c.lt.d fs, ft (cc = 0 implied)
                             * operation : cc <- (fs < ft)
                             */
                            answer = compute_answer("c.lt.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 61: {
                            /**
                             * c.nge.d instruction
                             * format : c.nge.d fs, ft
                             */
                            answer = compute_answer("c.nge.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 62: {
                            /**
                             * c.le.d instruction
                             * format : c.le.d fs, ft (cc = 0 implied)
                             * operation : cc <- (fs <= ft)
                             */
                            answer = compute_answer("c.le.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                        case 63: {
                            /**
                             * c.ngt.d instruction
                             * format : c.ngt.d fs, ft
                             */
                            answer = compute_answer("c.ngt.d", int_to_reg(fr_val[2]), int_to_reg(fr_val[1]));
                            break;
                        }
                    }
                    break;
                }
            }
             break;
         }
         case 18:{
             /**
              * coprocessor 2 instructions
              * Intentionally left out of this code
              */
              answer = "A COP2 Instruction.";
             break;
         }
         case 20:{
             /**
              * beql instruction (Branch on Equal Likely)
              * format : beql rs, rt, offset
              * operation : 1. target_offset <- sign_extended(offset)
              *                condition <- (gpr[rs] = gpr[rt])
              *             2. if condition then
              *                    PC <- PC + target_offset
              *                else
              *                    NullifyCurrentInstruction()
              *                endif
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("beql",int_to_reg(i_val[0]),int_to_reg(i_val[1]));

             break;
         }
         case 21:{
             /**
              * bnel instruction (Branch on Not Equal Likely)
              * format : bnel rs, rt, offset
              * operation : 1. target_offset <- sign_extended(offset)
              *                condition <- (gpr[rs] != gpr[rt])
              *             2. if condition then
              *                    PC <- PC + target_offset
              *                else
              *                    NullifyCurrentInstruction()
              *                endif
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("bnel",int_to_reg(i_val[0]),int_to_reg(i_val[1]));

             break;
         }
         case 22:{
             /**
              * blezl instruction (Branch on Less than or Equal to Zero Likely)
              * format : blezl rs, offset
              * operation : 1. target_offset <- sign_extended(offset)
              *                condition <- (gpr[rs] <= 0)
              *             2. if condition then
              *                    PC <- PC + target_offset
              *                else
              *                    NullifyCurrentInstruction()
              *                endif
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("blezl",int_to_reg(i_val[0]),std::to_string(i_val[2]));

             break;
         }
         case 23:{
             /**
              * bgtzl instruction (Branch on Greater than Zero Likely)
              * format : bgtzl rs, offset
              * operation : 1. target_offset <- sign_extended(offset)
              *                condition <- (gpr[rs] > 0)
              *             2. if condition then
              *                    PC <- PC + target_offset
              *                else
              *                    NullifyCurrentInstruction()
              *                endif
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer("bgtzl",int_to_reg(i_val[0]),std::to_string(i_val[2]));

             break;
         }
         case 28: {
             /**
              * Special2 opcode - 011100
              * Reference - MIPS32 Architecture for Programmers Vol II (March 12, 2001)
              */
             std::vector<int> r_val = process_r_type(binaryRep);
             std::vector<int> funcval(binaryRep.end() - 6, binaryRep.end());
             switch (bin_to_int(funcval)) {
                 case 0: {
                     /**
                      * MADD instruction (Multiply and Add Word to HI, LO)
                      * format : MADD rs, rt
                      * operation : temp <- (HI || LO) + GPR[rs] x GPR[rt]
                      *             HI <- temp 63..32
                      *             LO <- temp 31..0
                      */
                     answer = compute_answer("madd", int_to_reg(r_val[0]), int_to_reg(r_val[1]));

                 }
                 case 1: {
                     /**
                      * MADDU instruction (Multiply and Add Unsigned Word to HI, LO)
                      * format : MADDU rs, rt
                      * operation : temp <- (HI || LO) + GPR[rs] x GPR[rt]
                      *             HI <- temp 63..32
                      *             LO <- temp 31..0
                      */
                     answer = compute_answer("maddu", int_to_reg(r_val[0]), int_to_reg(r_val[1]));

                 }
                 case 2: {
                     /**
                      * MUL instruction (Multiply Word to GPR)
                      * format : MUL rd, rs, rt
                      * operation : temp <- GPR[rs] x GPR[rt]
                      *             gpr[rd] <- temp 31..0
                      *             HI <- UNPREDICTABLE
                      *             LO <- UNPREDICTABLE
                      */
                     answer = compute_answer("mul", int_to_reg(r_val[2]), int_to_reg(r_val[0]), int_to_reg(r_val[1]));

                 }
                 case 4: {
                     /**
                      * MSUB instruction (Multiply and Subtract Word to HI, LO)
                      * format : MSUB rs, rt
                      * operation : temp <- (HI || LO) - GPR[rs] x GPR[rt]
                      *             HI <- temp 63..32
                      *             LO <- temp 31..0
                      */
                     answer = compute_answer("msub", int_to_reg(r_val[0]), int_to_reg(r_val[1]));

                 }
                 case 5: {
                     /**
                      * MSUBU instruction (Multiply and Subtract Unsigned Word to HI, LO)
                      * format : MSUBU rs, rt
                      * operation : temp <- (HI || LO) - GPR[rs] x GPR[rt]
                      *             HI <- temp 63..32
                      *             LO <- temp 31..0
                      */
                     answer = compute_answer("msubu", int_to_reg(r_val[0]), int_to_reg(r_val[1]));

                 }
                 case 32: {
                     /**
                      * CLZ instruction (count leading zeroes in word)
                      * format : CLZ rd, rs
                      * operation : rd <- count_leading_zeroes rs
                      */
                     answer = compute_answer("clz", int_to_reg(r_val[2]), int_to_reg(r_val[0]));

                 }
                 case 33: {
                     /**
                      * CLO instruction (count leading ones in word)
                      * format : CLO rd, rs
                      * operation : rd <- count_leading_ones rs
                      */
                     answer = compute_answer("clo", int_to_reg(r_val[2]), int_to_reg(r_val[0]));

                 }
                 case 63: {
                     /**
                      * SDBBP instruction (Software Debug Breakpoint)
                      * format : SDBBP code
                      * operation : if DebugDM = 0 then
                      *                SignalDebugBreakpointException()
                      *             else
                      *                SignalDebugModeBreakpointException()
                      *             endif
                      */
                     answer = compute_answer("sdbbp");

                 }
             }
             break;
         }
         case 32:{
             /**
              * lb instruction (Load Byte)
              * format : lb rt, offset(base)
              * operation : rt <- memory[base + offset]
              */
             type = "I";
              std::vector<int> i_val = process_i_type(binaryRep);
              answer = compute_answer_base("lb",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 33:{
             /**
              * lh instruction (Load Halfword)
              * format : lh rt, offset(base)
              * operation : rt <- memory[base + offset]
              */
             type = "I";
              std::vector<int> i_val = process_i_type(binaryRep);
              answer = compute_answer_base("lh",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 34:{
             /**
              * lwl instruction (Load Word Left)
              * format : lwl rt, offset(base)
              * operation : rt <- rt MERGE memory[base + offset]
              *
              * (to load the most significant part of a word as a signed value from an unaligned memry address
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("lwl",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 35:{
             /**
              * lw instruction (Load Word)
              * format : lw rt, offset(base)
              * operation : rt <- memory[base + offset]
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("lw",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 36:{
             /**
              * lbu instruction (Load Byte Unsigned)
              * format : lbu rt, offset(base)
              * operation : rt <- memory[base + offset]
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("lbu",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 37:{
             /**
              * lhu instruction (Load Halfword Unsigned)
              * format : lhu rt, offset(base)
              * operation : rt <- memory[base + offset]
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("lhu",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 38:{
             /**
              * lwr instruction (Load Word Right)
              * format : lwr rt, offset(base)
              * operation : rt <- rt MERGE memory[base + offset]
              *
              * (to load the least significant part of a word as a signed value from an unaligned memry address
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("lwr",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 40:{
             /**
              * sb instruction (Store Byte)
              * format : sb rt, offset(base)
              * operation : memory[base + offset] <- rt
              */
             type = "I";
              std::vector<int> i_val = process_i_type(binaryRep);
              answer = compute_answer_base("sb",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 41:{
             /**
              * sh instruction (Store Halfword)
              * format : sh rt, offset(base)
              * operation : memory[base + offset] <- rt
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("sh",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 42:{
             /**
              * swl instruction (Store Word Left)
              * format : swl rt, offset(base)
              * operation : memory[base + offset] <- rt
              */
             type = "I";
              std::vector<int> i_val = process_i_type(binaryRep);
              answer = compute_answer_base("swl",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 43:{
             /**
              * sw instruction (Store Word)
              * format : sw rt, offset(base)
              * operation : memory[base + offset] <- rt
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("sw",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 46:{
             /**
              * swr instruction (Store Word Right)
              * format : sw rt, offset(base)
              * operation : memory[base + offset] <- rt
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("swr",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 47:{
             /**
              * cache instruction (Perform Cache Operation)
              * format : cache op, offset(base)
              * operation : performs cache operation specified by op
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("cache",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 48:{
             /**
              * ll instruction (Load Linked Word)
              * format : ll rt, offset(base)
              * operation : rt <- memory[base + offset]
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("ll",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 49:{
             /**
              * lwc1 instruction (Load Word to Floating Point)
              * format : lwc1 ft, offset(base)
              * operation : ft <- memory[base + offset]
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("lwc1",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 50:{
             /**
              * lwc2 instruction (Load Word to Coprocessor 2)
              * format : lwc2 rt, offset(base)
              * operation : rt <- memory[base + offset]
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("lwc2",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 51:{
             /**
              * pref instruction (Prefetch)
              * format : pref hint, offset(base)
              * operation : prefetch_memory[base + offset]
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("pref",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 53:{
             /**
              * ldc1 instruction (Load Doubleword to Floating Point)
              * format : ldc1 ft, offset(base)
              * operation : ft <- memory[base + offset]
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("ldc1",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 54:{
             /**
              * ldc2 instruction (Load Dooubleword to Coprocessor 2)
              * format : ldc2 rt, offset(base)
              * operation : rt <- memory[base + offset]
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("ldc2",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 56:{
             /**
              * sc instruction (Store Conditionaal Word)
              * format : sc rt, offset(base)
              * operation : if atomic_update then
              *                 memory[base + offset] <- rt
              *                 rt <- 1
              *             else
              *                 rt <- 0
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("sc",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 57:{
             /**
              * swc1 instruction (Store Word from Floating Point)
              * format : swc1 ft, offset(base)
              * operation : memory[base + offset] <- ft
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("swc1",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 58:{
             /**
              * swc2 instruction (Store Word from Coprocessor 2)
              * format : swc2 rt, offset(base)
              * operation : memory[base + offset] <- rt
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("swc2",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         case 61:{
             /**
              * sdc1 instruction (Store Doubleword from Floating Point)
              * format : sdc1 ft, offset(base)
              * operation : memory[base + offset] <- ft
              */
             type = "I";
              std::vector<int> i_val = process_i_type(binaryRep);
              answer = compute_answer_base("sdc1",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
              break;
         }
         case 62:{
             /**
              * sdc2 instruction (Store Doubleword from Coprocessor 2)
              * format : sdc2 ft, offset(base)
              * operation : memory[base + offset] <- rt
              */
             type = "I";
             std::vector<int> i_val = process_i_type(binaryRep);
             answer = compute_answer_base("sdc2",int_to_reg(i_val[1]),std::to_string(i_val[2]),int_to_reg(i_val[0]));
             break;
         }
         default:{
             answer = "Invalid Instruction.";
         }
     }
    decoded.push_back(type);
    decoded.push_back(answer);
    return decoded;
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
