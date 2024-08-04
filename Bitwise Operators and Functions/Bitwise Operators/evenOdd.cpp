#include<iostream>
using namespace std;

int main(){

    int number = 15;
    int setBitCount = 0;
    while(number != 0){
        int lastBit = (number&1);
        if(lastBit == 1){
            setBitCount++;
        }
        number = number >> 1;

    }

    cout << "Total set bits: " << setBitCount << endl;


    // HOMEWORK : QUESTIONS BITWISE OPERATOR


    // -----------------------------------------------


    // EVEN ODD USING BITWISE OPERATORS

    // int n = 102;
    // if((n&1) == 0){
    //     cout << "Even number" << endl;
    // }
    // else{
    //     cout << "Odd number" << endl;
    // }


    return 0;
}