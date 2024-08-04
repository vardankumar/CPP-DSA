#include<iostream>
using namespace std;

// int solve(int a, int b){

//     int sum = a + b;
//     return sum;
// }

void hello(){
    cout << 4;
}
void hi(){
    cout << 3;

    hello();
    cout << 4;

}

bool isPrime(int number){
    for(int i=2; i<=(number-1); i++){
        if(number % i == 0){
            return false;
        }
        return true;
    }
}


void printEvenInRange(int start, int end){
    for(int i=start; i<=end; i++){
        int number = i;
        if(!(number&1)){
            cout << number << endl;
        }
    }
}

void printOddInRange(int start, int end){
    for(int i=start; i<=end; i++){
        int number = i;
        if((number&1)){
            cout << number << endl;
        }
    }
}


int main(){

    // int ans = solve(10, 15);
    // cout << ans;

    // cout << 1;
    // hi();
    // cout << 2;

    // cout << isPrime(112) << endl;

    // printEvenInRange(11, 31);
    printOddInRange(11, 31);

    return 0;
}