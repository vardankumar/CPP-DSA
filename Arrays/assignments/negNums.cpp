#include<iostream>
using namespace std;


void moveAllNegToLeft(int *a, int n){
    // DUTCH NATIONAL FLAG ALGORITHM
    int low=0, high=n-1;
    while(low < high){
        if(a[low] < 0){
            low++;
        }else if(a[high] > 0){
            high--;
        }else{
            swap(a[low], a[high]);
        }
    }
}


int main(){

    int a[]={-1, 2, -3, 4, -5, 6, 0, -5, 34, -7};
    int n=sizeof(a)/sizeof(int);
    
    
    moveAllNegToLeft(a, n);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}