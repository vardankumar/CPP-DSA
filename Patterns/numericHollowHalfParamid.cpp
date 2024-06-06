#include<iostream>
using namespace std;

int main(){

    for(int row = 0; row < 5; row++){
        int number = 0;
        for(int col = 0; col < row + 1; col++){
            number++;
            if(row == 0 || row == 5 - 1 || col == 0 || col == row){
                cout << number << " ";
            }else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}