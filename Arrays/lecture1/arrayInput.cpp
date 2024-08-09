#include<iostream>
#include<array>
using namespace std;

int main(){

    int arr[5];
    for(int i=0; i<5; i++){
        cout << "Enter the value for box index:" << i << endl;
        cin >> arr[i];
    }

    for(int i=0; i<5; i++){
        cout<< arr[i] << " ";
    }

    return 0;
}