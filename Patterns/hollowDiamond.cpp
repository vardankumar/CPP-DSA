#include <iostream>
using namespace std;
void invertedHollowParamid(int n){
    
    for (int row = 0; row < n; row++){
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        for (int col = 0; col < n - row; col++){
            if(/* row == 0 || */ row == n - 1 || col == 0 || col == n - row - 1){
                cout << "* ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}


void hollowParamid(int n){
    for(int row = 0; row < n; row++){
        // space
        for(int col = 0; col < n-row-1; col++){
            cout << " ";
        }

        // stars
        for(int col = 0; col < row + 1; col++){
            if(row == 0 /* || row == n - 1 */ || col == 0 || col == row){
                cout << "* ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }
       
}


void printDiamond(int n){
    hollowParamid(n);
    invertedHollowParamid(n);
}


int main(){

    int size;
    cout << "Enter the Size of diamond" << endl;
    cin >> size;
    printDiamond(size);
    

    return 0;
    
}