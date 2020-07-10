#include "converter.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

#define log(x) std::cout << x << std::endl

void Converter::parse(int num)
{
    i_num = num;

    f_num = static_cast<float>(num);
    c = static_cast<char>(num);
    d_num = static_cast<double>(num);
    
    print_conv();
}

void Converter::parse(float num)
{
    f_num = num;

    i_num = static_cast<int>(num);
    c = static_cast<char>(num);
    d_num = static_cast<double>(num);
    
    print_conv();
}

void Converter::parse(double num)
{
    d_num = num;

    f_num = static_cast<float>(num);
    c = static_cast<char>(num);
    i_num = static_cast<int>(num);
    
    print_conv();
}

void Converter::parse(char c)
{
    this->c = c;

    f_num = static_cast<float>(c);
    // c = static_cast<char>(c);
    i_num = static_cast<int>(c);
    d_num = static_cast<double>(c);
    
    print_conv();
}



void Converter::print_conv()
{
    if (c > 32)
        log("char: " << c);
    else{
        log("char: non displayable");
    }
    log("int: " << i_num);
    log("float: " << std::setprecision(2) << std::showpoint << f_num << "f");
    log("double: " << std::setprecision(1) << d_num);
}