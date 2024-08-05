#include<iostream>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    int onesPlace;
    while(n>0){
        onesPlace = n%10;
        cout << onesPlace << " ";
        n = n/10;
    }

    return 0;
}