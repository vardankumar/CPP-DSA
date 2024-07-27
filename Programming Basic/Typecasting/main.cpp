#include<iostream>
using namespace std;



int main(){


    // IMPLICIT TYPE CASTING
    // 1. INT TO FLOAT

    // int num1 = 12;
    // float num2 = 5.54;
    // float result = num1 + num2;
    // cout << result << endl;


    // int num1 = 12;
    // float num2 = 5.54;
    // auto result = num1 + num2;
    // cout << result << endl;


    // CHAR TO INT

    // char ch = 'A';
    // int a = ch  + 1;
    // cout << a << endl;


    // INT TO CHAR
    // int a = 97;
    // char ch = ++a;
    // cout << ch << endl;


    // EXPLICIT TYPE CONVERSION

    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + (int)num2;
    cout << result << endl;


    double pi = 3.141593427;
    int intPi = (int)pi;
    cout << intPi << endl;


    return 0;
}