#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of half paramid" << endl;
    cin >> n;



    for(int row = 0; row < n; row = row + 1){
        for(int col = n - 1; col >= row; col = col - 1){
            cout << "* ";
        }
            cout << endl;
    }

    return 0;
}