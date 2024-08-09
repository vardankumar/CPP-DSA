#include<iostream>
#include<array>
using namespace std;

int main(){

    int arr[3] ;
    fill(arr, arr+3, 5);
    cout << arr[2] << endl;
    cout << arr;

    return 0;
}