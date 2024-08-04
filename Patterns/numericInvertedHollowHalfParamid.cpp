#include<iostream>
using namespace std;



// 1 2 3 4 5
// 2     5
// 3   5 
// 4 5 
// 5


void numericInvertedHollowHalfParamid(int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(j == i+1 || j == n || i == 0){
                cout << j << " ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }

}

int main(){
    int n;
    cin >> n;
    numericInvertedHollowHalfParamid(n);

    return 0;
}