#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of half paramid" << endl;
    cin >> n;



    for(int row = n - 1; row >= 0; row = row - 1){
        for(int col = row - 1; col >= 0; col = col - 1){
            if(row == 0 || row == n - 1){
                cout  << "* ";
            }else{
                if(col == 0 || col == row - 1){
                    cout  << "* ";
                }else {
                    cout  << "  ";
                }
            }
        }
            cout << endl;
    }

    return 0;
}