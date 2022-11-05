// FCAI – Object-Oriented Programming 1 – 2022 - Assignment 2
// Program Name: BigReal
// Last Modification Date: 4/11/2022
// Author1 and ID and Group: Rawan Hesham Hamdy  ID: 20211040
// Author2 and ID and Group: Nourhan Mahmoud Eldesoky  ID: 20211107
// Author3 and ID and Group: Mariam Moutaz Mohamed  ID: 20210386
/*
description: In this problem we developed a new C++ type (class).
that can hold unlimited Real values and performs arithmetic operations on them.
such as: +, -, <, and >.
 */

#ifndef BIGREALCLASS_H
#define BIGREALCLASS_H


#include"BigDecInt.h"
#include <iostream>
#include<string>
#include<regex>


using namespace std;

class BigReal{
private:
    BigDecimalInt num;
    bool check=true;
    string num_real;
    char sgn;
public:
    BigReal();
    BigReal(double real=0.0);
    BigReal(string real);
    BigReal(BigDecimalInt n);
    bool checkvalidreal(string real);
    BigReal( BigReal&& other);
    BigReal(const BigReal& other);
    string getNum(){
        return num_real;
    }
    char getSign(){
        return sgn;
    }
    void setSign(char s){
        sgn = s;
    }
    BigReal operator+ (BigReal other);
    BigReal operator- (BigReal other);
    BigReal& operator=( BigReal& other);
    BigReal& operator=( BigReal&& other);
    bool operator<  (BigReal anotherReal);
    bool operator>  (BigReal anotherReal);
    bool operator== (BigReal anotherReal);
    int size();
    int sign();
    friend ostream& operator << (ostream& out, BigReal num);
    friend istream& operator >> (istream& in, BigReal &num);
};


#endif // BIGREALCLASS_H
