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

#include <iostream>
#include"BigReal.h"

using namespace std;

int main() {
    BigReal num("-198.001");
    BigReal num1("-81.71");
    BigReal num2 = num - num1;
    cout << num2 << endl;
    BigReal num3("-2071.1945");
    BigReal num4("9.09");
    BigReal num5 = num3 + num4;
    cout << num5 << endl;
    BigReal num6 = num2 + num5;
    cout << num6 << endl;
    BigReal num7("-3456.89");
    BigReal num8("345.89");
    BigReal num9("5675.89");
    BigReal num10("456.56");
    BigReal num11("-2345456.56");
    BigReal n1 ("11.9000000000000000000000000000000001");
    BigReal n2 ("2333333333339.1134322222222292");
    BigReal n3 = n1 + n2;
    cout << n3 << endl;
    if (num7 < num8){
        cout << "less" << endl;
    }
    else{
        cout << "greater" << endl;
    }
    if (num11 > num8){
        cout << "greater" << endl;
    }
    else{
        cout << "less" << endl;
    }
    if (num9 == num10){
        cout << "equal" << endl;
    }
    else{
        cout << "not equal" << endl;
    }
    cout << num7.size() << endl;
    cout << num7.sign() << endl;
    cout << num7 << endl;
    cout << "Enter a number: ";
    cin >> num10;
    cout << num10 << endl;
}
