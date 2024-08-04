#include<iostream>
using namespace std;



// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5


void numericHollowHalfParamid(int n){
    for(int i=0; i<n; i++){
        int num = 1;
        for(int j=0; j<i+1; j++){
            if(i == 0 || i == n-1 || j == 0 || j == i ){
                cout << num << " ";
            }else{
                cout << "  ";
            }
            num++;
        }
        cout << endl;
    }

}

int main(){
    int n;
    cin >> n;
    numericHollowHalfParamid(n);

    return 0;
}