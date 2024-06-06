

// Debug the code. This code is trying to calculate area of a rectangle.

// #include<iostream>
// using namespace std;

// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	double area = (width * height) / 2;
// 	cout << "Area of the triangle is " << area << endl;
// 	return 0;
// }


// Debug the code. Convert Binary to Decimal.

// #include<iostream>
// using namespace std;

// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n%10;
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n%10;
//     }
//     cout<<sum;
//     return 0;
// }


// Debug the code. Print all the prime numbers that lie in the range 2 to N (both inclusive)

#include<iostream>
using namespace std;

int main(){
    int n, flag=1;
    cin>>n;
    for(int i=2;i<=n;i++){
        flag = 1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag = 0;
            }
        }
        if(flag==1){
            cout<<i<<endl;
        }
    }
    return 0;
}