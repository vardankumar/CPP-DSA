#include<iostream>
#include<vector>
using namespace std;

bool search2DArray(vector<vector<int>>arr, int target){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i = 0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
};

int diagonalSum(int arr[][3], int rowSize, int colSize){
    int sum = 0;
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            if(i == j){
                sum += arr[i][j];
            }
        }
    }
    cout << sum << endl;
    return sum;
}


int reverseDiagonalSum(int arr[][3], int rowSize, int colSize){
    int sum = 0;
    for(int i=0; i<rowSize; i++){
        for(int j=rowSize-i-1 ; j>=0; j--){
            if(j == colSize-i-1){
                sum += arr[i][j];
            }
        }
    }
    cout << sum << endl;
}


int rowSum(int arr[][3], int rowSize, int colSize){
    for(int i=0; i<rowSize; i++){
        int sum = 0;
        for(int j = 0; j < colSize; j++){
            sum+= arr[i][j];
        }
        cout << sum << endl;
    }
    return 0;
}

void transposeMatrix(int arr[][3], int rowSize, int colSize){

    // Sol 1 : With a new array initialzation

    // int ans[100][100];
    // for(int i=0; i<rowSize; i++){
    //     for(int j=0; j<colSize; j++){
    //         ans[i][j] = arr[j][i];
    //     }
    // }


    // Sol 2 : With same array;

    // for(int i=0; i<rowSize; i++){
    //     for(int j=colSize-1; j>i; j--){
    //         swap(arr[i][j] , arr[j][i]);
    //     }
    // }


    for(int i=0; i<rowSize; i++){
        for(int j=i; j<colSize; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }
    
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }


}

int colSum(int arr[][3], int rowSize, int colSize){
    for(int i = 0; i<rowSize; i++){
        int sum = 0;
        for(int j=0; j<colSize; j++){
            sum += arr[j][i];
        }
        cout << sum<< endl;
    }
}

int main(){

    int arr[3][3] = {
        {10, 11, 12},
        {20, 21, 22},
        {30, 31, 32},
    };

    int rowSize = 3;
    int colSize = 3;

    transposeMatrix(arr, rowSize, colSize);

    // reverseDiagonalSum(arr, rowSize, colSize);


    // colSum(arr, rowSize, colSize);

    // diagonalSum(arr, rowSize, colSize);


    // rowSum(arr, rowSize, colSize);


    // 2D ARRAY FROM VECTOR

    // vector<vector<int>> arr(4, vector<int>(3, 1));
    // int rowSize = arr.size();
    // int colSize = arr[0].size();

    // for(int row = 0; row < rowSize; row++){
    //     for(int col = 0; col < colSize; col++){
    //         cout << "Enter the value for (" << row << ", " << col << ") :" << endl;
    //         cin >> arr[row][col] ;
    //     }
    //     cout << endl;
    // }

    // int target = 40;

    // bool ans = search2DArray(arr, target);
    // cout << ans;


    // vector<vector<int>> arr(4, vector<int>(3, 0))


    // 2D Array creation

    // int arr[4][3] = {
    //     {10, 20, 30},
    //     {11, 12, 13},
    //     {14, 15, 16},
    //     {17, 18, 19},
    // };

    // traverse the array

    // int rowSize = 4;
    // int colSize = 3;

    // for(int rowIndex = 0; rowIndex < rowSize; rowIndex++){
    //     for(int colIndex = 0; colIndex < colSize; colIndex++){
    //         cout << arr[colIndex][rowIndex] << " " ;
    //     }
    //     cout << endl;
    // }


    // int arr[2][3];
    // int rowSize = 2;
    // int colSize = 3;

    // for(int r=0; r < rowSize; r++){
    //     for(int c=0; c<colSize; c++){
    //         cout << "Enter the value for (" << r << ", " << c << ") : ";
    //         cin >> arr[r][c];
    //     }
    // }
    // for(int r = 0; r < rowSize; r++){
    //     for(int c = 0; c < colSize; c++){
    //         cout << arr[r][c] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
