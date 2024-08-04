#include<iostream>
using namespace std;


//     1
//    121
//   12321
//  1234321
// 123454321

void solidHalfDiamond(int n){
    
    for(int i=0; i<(2*n)-1; i++){
        int condition;
        if(i<n){
            condition = i;
        }else{
            condition = n-(i%n)-2;
        }
        for(int j=0; j<=condition; j++){
            cout << "*";
        }
        cout << endl;
   }

}

int main(){
    int n;
    cin >> n;
    solidHalfDiamond(n);

    return 0;
}