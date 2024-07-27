#include<iostream>
#include<cmath>
using namespace std;

int decimalTobinaryMethod1(int n){
    int binaryNum = 0;
    int placeValue = 1;
    while(n > 0){
        int bit = n%2;
        // cout << bit << endl;
        binaryNum += bit*placeValue;
        placeValue *= 10;
        n = n/2;
    }
    return binaryNum;
}

int main(){
    int n;
    cin >> n;
    int binary = decimalTobinaryMethod1(n);
    cout << binary;
    return 0;
}