#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include "converter.hpp"

int str_conv(std::string str)
{
    int res;
    Converter c;

    res = -100;
    if (str.length() == 1 && ( ((str[0] - 48 ) < 0) || ((str[0] - 48) > 9) ) ){
        std::cout << "The input is a character" << std::endl;
        char chr = str[0];
        c.parse(chr);
    }
    else if (str.find('.') != std::string::npos){
        std::cout << "The input is a real value" << std::endl;

        if (str.find('f') != std::string::npos){
            std::cout << "\t and is of floating point type" << std::endl;
            float f = std::stof(str, nullptr);
            c.parse(f);
        }
        else{
            std::cout << "\t and is of double type" << std::endl;
            double d = std::stod(str, nullptr);
            c.parse(d);
        }
    }
    else{
        std::cout << "The string is an integer" << std::endl;
        int num = std::stoi(str, nullptr);
        c.parse(num);
    }


    res = 0;
    return res;
}


int main(int argc, char **argv)
{
    
    for (int i = 1; i < argc; i++){
        str_conv(argv[i]);
    }
    return (0);
}