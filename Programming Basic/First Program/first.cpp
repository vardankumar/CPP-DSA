#include<iostream>
using namespace std;

int main(){

    // cout << "Hello World" << endl;
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "Your age is " << age << endl;

    int age = 20;
    char ch = 'a';
    float f = 3.121;
    double d = 12.356789765432;
    cout << age << " size of int : " << sizeof(age) <<endl;
    cout << ch << " size of ch : " << sizeof(ch) <<endl;
    cout << f << " size of float : " << sizeof(f) <<endl;
    cout << d << " size of double : " << sizeof(d) <<endl;


    return 0;
}