#include<iostream>
using namespace std;

void fullFancy12(int n){
    for(int row=0; row<n; row++){
        
        for(int col=0; col<2*row +1; col++){
            int num = row+1;
            if(col % 2 == 0){
                cout << num;
            }else{
                cout << "*";
            }            
        }
        cout << endl;
    }

    for(int row=0; row<n-1; row++){
        int num=n-row-1;
        for(int col=0; col<2*(n-row-1)-1; col++){
            if(col % 2 == 0){
                cout << num;
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

    fullFancy12(n);


    return 0;
}