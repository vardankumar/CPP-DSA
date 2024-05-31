#include <iostream>
using namespace std;


void invertedFullParamid(int n){
    for(int row = 0; row < n; row++){
        // space
        for(int col = 0; col < row; col++){
            cout << " " ;
        }

        // stars
        for(int col = 0; col < n-row; col++){
            cout << "* ";
        }
      
        cout << endl;
    }
       
}

int main(){


    int n;
    cout << "Enter the size of Paramid";
    cin >> n;

    invertedFullParamid(n);

    return 0;
}