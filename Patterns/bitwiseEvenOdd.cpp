#include<iostream>
using namespace std;

void bitwiseEvenOdd(int n){
    if((n&1) == 0){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }

}


int main(){

    int n;
    cin >> n;
    bitwiseEvenOdd(n);

    return 0;
}


