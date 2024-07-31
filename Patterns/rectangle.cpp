#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter no of rows : ";
    cin >> row;
    cout << endl;
    int col;
    cout << "Enter no of cols : ";
    cin >> col;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "* ";
        }
        cout<< endl;
    }

    return 0;
}