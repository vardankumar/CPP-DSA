#include<iostream>
using namespace std;

    void print(int nums[], int size){
        for(int index = 0; index<size; index++){
            cout << nums[index] << endl;
        }
    }

int main(){


    // Array creation

    // int arr[10];
    // int brr[];
    // int crr[] = {10, 20, 30, 40, 50};
    // int drr[] = {0};
    // cout <<drr[0] << endl;
    // cout <<crr[15] << endl;

    // int arr[4];
    // fill(arr, arr+4, 32);
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;


    // for(int i = 0; i < 4; i++){
    //     cout << arr[i] << endl;
    // }


    // Array with functions



    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    print(arr, size);


    return 0;
}