#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value for n" << endl;
    cin >> n;
    for(int row=0; row<n; row++){
        int n=1;
       for(int col=0; col<=row; col++){
        cout << n << " ";
        n++;
       }
        cout << endl;
    }

    return 0;
}