#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value for n" << endl;
    cin >> n;
    for(int row=0; row<n; row++){
        for(int col=0; col<=row; col++){
            if(row == 0 || row == n-1 || col == 0 || col == row){
                cout<<"* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}