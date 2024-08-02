#include<iostream>
using namespace std;


void hollowParamid(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        for(int j=0; j<=i; j++){
            if(i==0 || i==n-1 || j==0 || j==i){
                cout << "* ";
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
    hollowParamid(n);


    return 0;
}