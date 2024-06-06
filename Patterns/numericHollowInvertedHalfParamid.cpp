#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n; 
    for(int row = 0; row < n; row++){
        // int number = 0;
        for(int col = row + 1; col <= n; col++){
            // number++;
            if(row == 0 || col == row + 1 || col == n){
                cout << col;
            }else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}