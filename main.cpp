#include <iostream>
#include <vector>
#include "Header.h"
#include <fstream>

using namespace std;

int main() {

    /**
     * For taking input from command line.
     */
    string a;
    cin >> a;
    /**
     * Print the Type of instruction
     */
    cout << input(a)[0] <<endl;
    /**
     * Print the Decoded instruction
     */
    cout << input(a)[1];

    return 0;
}
