#include<iostream>
#include<stack>
using namespace std;

int main(){

    // CREATION
    stack<int> st;

    // INSERTION
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.size() << endl;

    st.pop();


    cout << st.size() << endl;


    cout << st.top() << endl;




    return 0;
}