#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void printDouble(int a){
    cout << 2*a << " ";
}

bool checkEven(int a){
    return a%2 == 0;
}

int main(){

    vector<int> arr(6);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 31;
    arr[3] = 41;
    arr[4] = 50;
    arr[5] = 60;

    // for_each(arr.begin(), arr.end(), printDouble);

    // int target = 400;
    // vector<int>::iterator it = find(arr.begin(), arr.end(), target);
    // cout << *it << endl;

    // auto it = find_if(arr.begin(), arr.end(),checkEven);
    // cout << *it << endl;

    // int target = 11;
    // int ans = count(arr.begin(), arr.end(), target);
    // cout << ans;

    // int ans = count_if(arr.begin(), arr.end(), checkEven);
    // cout << ans << endl;

    // sort(arr.begin(), arr.end());
    // for(int a : arr){
    //     cout << a << endl;
    // }

    // reverse(arr.begin(), arr.end());
    // for(int a : arr){
    //     cout << a << endl;
    // }


    // cout << "Before Shifting" << endl;
    // for(int a : arr){
    //     cout << a << " ";
    // }

    // cout << endl;

    // rotate(arr.begin(), arr.begin() + 3, arr.end());

    //   cout << "After Shifting" << endl;
    //     for(int a : arr){
    //         cout << a << " ";
    //     }


    partition(arr.begin(), arr.end(), checkEven);
            for(int a : arr){
            cout << a << " ";
        }

    return 0;
}