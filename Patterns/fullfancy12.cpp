#include <iostream>
using namespace std;

void fancy12(int n){
    
    for(int row = 0; row < n; row++){
        for(int col = 0; col < 2 * row + 1; col++){
            if(col % 2 == 0){
                cout << row + 1;
            }else {
                cout << "*";
            }
        }
        cout << endl;
    }
}


void invertedFancy12(int n){
    n--;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < 2*(n - row) - 1; col++){
            if(col % 2 == 0){
                cout << n - row;
            }else {
                cout << "*";
            }
        }
        cout << endl;
    }
}




int main(){

    int n;
    cout << "Enter the value of n"; 
    cin >> n;
    cout << endl;

    fancy12(n);
    invertedFancy12(n);

    return 0;
}