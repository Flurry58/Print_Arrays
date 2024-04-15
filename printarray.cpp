#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include "printarray.h"


void print_string(std::string a, char delim){ // print string but don't show delimeter
	std::istringstream ss(a);
    std::string token;
    while(std::getline(ss, token, delim)) {
        std::cout << token << ' ';
    }
	std::cout << std::endl;
}
