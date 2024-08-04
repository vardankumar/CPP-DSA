#include<iostream>
using namespace std;


// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

void fancy12(int n){
    for(int i=0; i<n; i++){
        int startNumIndex = 8-i;
        int num = i+1;
        int countNum = num;
        for(int j=0; j<17; j++){
            if(j == startNumIndex && countNum > 0){
                cout << num;
                startNumIndex += 2;
                countNum--;
            }else{
                cout << "*";
            }

        }
        cout << endl;
    }
}


int main(){

    int n;
    cin >> n;
    fancy12(n);

    return 0;
}