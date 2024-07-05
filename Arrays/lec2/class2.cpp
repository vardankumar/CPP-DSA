#include<iostream>
#include<algorithm>
using namespace std;


int findUniqueNumber(int arr[], int n){
    int ans = 0;

    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }

    return ans;

}



void sortZeroOne(int arr[], int n){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            zeroCount++;
        }else oneCount++;
    }


    int i = 0;
    for(;i<zeroCount; i++){
        arr[i] = 0;
    }
    for(; i<n; i++){
        arr[i] = 1;
    }



    fill(arr, arr+zeroCount , 0);
    fill(arr+zeroCount, arr+n, 1);



}



void printAllPairs(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = n-1; j>i; j--){
            cout << arr[i] << " , " << arr[j] << endl;
        }
    }
}



// bool checkTwoSum(int arr[], int n, int target){
//     for(int i = 0; i < n; i++){
//         for(int j=0; j<n; j++){
//             if(arr[i] + arr[j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }




pair<int, int> checkTwoSum(int arr[], int n, int target){
    pair<int, int> ans = make_pair(-1, -1);
    for(int i = 0; i < n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] + arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}



int printAllTriplets(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                count++;
            }
        }
    }
    return count;
}


bool checkThreeSum(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == target){
                    cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                }
            }
        }
    }
}




void rotateArray(int arr[], int size, int shift){
    int finalShift = shift % size;
    // step 1: copy last finalShift elements into a temp array
    if(finalShift == 0){
        return ;
    }

    int temp[1000];
    int index=0;
    for(int i=size-finalShift; i<size; i++){
        temp[index] = arr[i];
        index++;
    }

    // step 2: shift array elements by finalShift places.
    for(int i=size; i>0; i--){
        arr[i] = arr[i-finalShift];
    }


    // step 3: copy temp elements into origional array
    for(int i = 0; i < finalShift; i++){
        arr[i] = temp[i];
    }


}




int main(){


    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    // cyclically rotate array by 2 places
    int shift = 6;



    cout << "Before" << endl;
    for(int i=0; i<size; i++){
         cout << arr[i] << " ";
    }
    cout << endl;


    rotateArray(arr, size, shift);


    cout << "After" << endl;
    for(int i=0; i<size; i++){
         cout << arr[i] << " ";
    }
    cout << endl;


//    checkThreeSum(arr, size, 70);

    // int count = printAllTriplets(arr, size);
    // cout << count;


    // pair<int, int> ans = checkTwoSum(arr, size, 60);
    // if(ans.first == -1 && ans.second == -1){
    //     cout << "Pair not found!";
    // }else{
    //     cout << "Pair found : " << ans.first << ", " << ans.second;
    // }

    // printAllPairs(arr, size);



    // int arr[] = {0, 1, 1, 1, 0, 0, 1};
    // int size = 7;


    // sort(arr, arr+size);


    // sortZeroOne(arr, size);

    // for(int i=0; i<size; i++){
    //     cout << arr[i] << endl;
    // }

    // int ans = findUniqueNumber(arr, size); 
    // cout << ans << endl;

    return 0;
}