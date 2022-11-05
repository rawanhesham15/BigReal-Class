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

#include "BigReal.h"
#include"BigDecInt.h"

using namespace std;



BigReal BigReal::operator+(BigReal other) {
    int sizeNum1 = num_real.length();
    int sizeNum2 = other.num_real.length();
    int pointIndx;

    string part1Num1 = "", part2Num1 = "";
    string part1Num2 = "", part2Num2 = "";
    bool point = false;

    // make the two number equals at the size (after the point) by adding zeros at right.
    for (int i = 0; i < sizeNum1; ++i) {
        if(num_real[i] == '.'){
            point = true;
        }
        else if(!point){
            part1Num1 += num_real[i];
        }
        else{
            part2Num1 += num_real[i];
        }
    }

    point = false;
    for (int i = 0; i < sizeNum2; ++i) {
        if(other.num_real[i] == '.'){
            point = true;
        }
        else if(!point){
            part1Num2 += other.num_real[i];
        }
        else{
            part2Num2 += other.num_real[i];
        }
    }

    if(part2Num1.size() > part2Num2.size()){
        while(part2Num1.size() != part2Num2.size()) {
            part2Num2 += '0';
        }
    }
    else if(part2Num1.size() < part2Num2.size()){
        while(part2Num2.size() != part2Num1.size()) {
            part2Num1 += '0';
        }
    }

    // The index of the point.
    pointIndx = part2Num1.length();

    string num1 = part1Num1 + part2Num1;
    string num2 = part1Num2 + part2Num2;


    BigDecimalInt n1(num1);
    BigDecimalInt n2(num2);
    BigDecimalInt n3 = n1 + n2;

    int s = n3.sign();
    char sgn;
    if(s == 0){
        sgn = '-';
    }
    else{
        sgn = '+';
    }

    string result = n3.getNumber();
    string ans = "";
    for (int i = 0; i < result.length(); ++i) {
        if(i == 0){
            ans+=sgn;
        }
        if(result.length() - pointIndx == i){
            ans += '.';
        }
        ans += result[i];
    }

    BigReal answer(ans);
    answer.setSign(sgn);
    return answer;
}


BigReal BigReal::operator-(BigReal other) {
    int sizeNum1 = num_real.length();
    int sizeNum2 = other.num_real.length();
    int pointIndx;

    string part1Num1 = "", part2Num1 = "";
    string part1Num2 = "", part2Num2 = "";
    bool point = false;

    // make the two number equals at the size (after the point) by adding zeros at right.
    for (int i = 0; i < sizeNum1; ++i) {
        if(num_real[i] == '.'){
            point = true;
        }
        else if(!point){
            part1Num1 += num_real[i];
        }
        else{
            part2Num1 += num_real[i];
        }
    }

    point = false;
    for (int i = 0; i < sizeNum2; ++i) {
        if(other.num_real[i] == '.'){
            point = true;
        }
        else if(!point){
            part1Num2 += other.num_real[i];
        }
        else{
            part2Num2 += other.num_real[i];
        }
    }

    if(part2Num1.size() > part2Num2.size()){
        for (int i = 0; i < (part2Num1.size() - part2Num2.size())+1; ++i) {
            part2Num2 += '0';
        }
    }
    else if(part2Num1.size() < part2Num2.size()){
        for (int i = 0; i < (part2Num2.size() - part2Num1.size())+1; ++i) {
            part2Num1 += '0';
        }
    }

    // The index of the point.
    pointIndx = part2Num1.length();

    string num1 = part1Num1 + part2Num1;
    string num2 = part1Num2 + part2Num2;

    BigDecimalInt n1(num1);
    BigDecimalInt n2(num2);
    BigDecimalInt n3 = n1 - n2;

    int s = n3.sign();
    char sgn;
    if(s == 0){
        sgn = '-';
    }
    else{
        sgn = '+';
    }

    string result = n3.getNumber();
    string ans = "";
    for (int i = 0; i < result.length(); ++i) {
        if(i == 0){
            ans += sgn;
        }
        if(result.length() - pointIndx == i){
            ans += '.';
        }
        ans += result[i];
    }
    BigReal answer(ans);
    answer.setSign(sgn);
    return answer;
}
