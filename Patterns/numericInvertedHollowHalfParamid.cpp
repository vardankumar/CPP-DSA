#include<iostream>
using namespace std;



// 1 2 3 4 5
// 2 3 4 5
// 3 4 5 
// 4 5 
// 5


void numericInvertedHollowHalfParamid(int n){
    for(int i=0; i<n; i++){
        int num = 1;
        for(int j=1; j<=n-i; j++){
            cout << i+j;
        }
        cout << endl;
        // num = num + i;
    }

}

int main(){
    int n;
    cin >> n;
    numericInvertedHollowHalfParamid(n);

    return 0;
}