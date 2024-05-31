#include<iostream>
using namespace std;

void invertedHollowParamid(int n){
    
    for (int row = 0; row < n; row++){
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        for (int col = 0; col < n - row; col++){
            if(row == 0 || row == n - 1 || col == 0 || col == n - row - 1){
                cout << "* ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main(){

    int size;
    cout << "Enter the size of paramid: ";
    cin >> size;
    invertedHollowParamid(size);

    return 0;
}