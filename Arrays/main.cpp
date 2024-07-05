#include<iostream>
using namespace std;

    void print(int nums[], int size){
        for(int index = 0; index<size; index++){
            cout << nums[index] << endl;
        }
    }

    void solve1(int arr[], int size){
        for(int i  = 0; i<size;i++){
            cout<< arr[i] * 10 << endl;
        }
    }

    bool findTarget(int arr[], int size, int target){
       // TRAVERSE THE ENTIRE ARRAY 
       for(int i = 0; i < size; i++){
        int currentElement = arr[i];
        if(currentElement == target){
            return true;
        }
       }
       return false;
    }


    int findMax(int arr[], int size){
        int maxAns = INT32_MIN;
        for(int i = 0; i<size;i++){
            if(arr[i] > maxAns){
                maxAns = arr[i];
            }
        }
        return maxAns;
    }


    void extremePrinting(int arr[], int size){

        // two pointers technique
        int j = size - 1;
        for(int i = 0; i<size; i++){
            if(i<=j){
                cout << arr[i] << endl;
                if(j>i){

                cout << arr[j] << endl;
                j--;
                }
            }
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



    // int arr[] = {10, 20, 30, 40, 50,60, 70};
    // int size = 7;
    // int target = 50;
    // print(arr, size);
    // solve1(arr, size);
    // bool answer = findTarget(arr, size, target);
    // cout << answer;


    // int answer = findMax(arr, 5);
    // cout << answer;

    // extremePrinting(arr, size);



    // zor swipping

    int a = 3;
    int b = 17;

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    cout << "a : " << a << "b : " << b << endl;



    return 0;
}