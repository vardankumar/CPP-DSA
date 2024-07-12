#include<iostream>
#include<forward_list>
#include<list>
#include<vector>
using namespace std;

int main(){

    // Random Access Iterator

    vector<int> arr = {10, 20, 30, 40, 50};

    vector<int>::iterator it = arr.begin();






    // Bi-directional Iterator
    // list<int> myList;
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_back(30);


    // list<int>::iterator it = myList.end();


    // while(it != myList.begin()){
    //     --it;
    //     (*it) = (*it) + 2;
    //     cout << (*it) << " ";
    // }



    // list<int>::iterator it = myList.begin();


    // while(it != myList.end()){
    //     *it = *it + 2;
    //     cout << *it << " ";
    //     it++;
    // }


    // Forward Iterator

    // forward_list<int> list;
    // list.push_front(10);
    // list.push_front(20);
    // list.push_front(30);

    // traverse using iterator

    // forward_list<int>::iterator it = list.begin();

    // while(it != list.end()){
    //     *it = *it + 5;
    //     cout << *it <<  " ";
    //     it++;
    // }


    // forward_list<int>::iterator it = list.begin();




    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);

    // vector<int>::iterator it = arr.begin();

    // while(it != arr.end()){
    //     cout << *it << " ";
    //     it--;
    // }


    return 0;
}