#ifndef CONVERT
#define CONVERT

#include <string>
#include <iostream>

class Converter
{
public: 
    void parse(int num);
    void parse(float num);
    void parse(char c);
    void parse(double num);
private:
    char c;
    int i_num;
    float f_num;
    double d_num;

    void print_conv();
};

#endif