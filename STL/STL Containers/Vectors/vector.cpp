#include<iostream>
#include<vector>
using namespace std;

int main(){


    // 2D Array using vector;

    vector<vector<int>>arr(4, vector<int>(4, 0));
    int totalRows = arr.size();
    int totalColumns = arr[0].size();
    cout << "total Rows " << totalRows << endl;
    cout << "total Columns " << totalColumns << endl;



    vector<vector<int>> brr(4);
    brr[0] = vector<int>(5);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(4);
    brr[3] = vector<int>(3);




    // vector<int> first;
    // vector<int> second;

    // first.push_back(10);
    // first.push_back(11);
    // first.push_back(12);
    // first.push_back(13);


    // traversing the vector using iterator

    // create an iterator

    // vector<int>::iterator it = first.begin();


    // while(it != first.end()){
    //     cout << *it << " ";
    //     it++;
    // } 




    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);

    // first.swap(second);

    // for(int i=0; i<first.size(); i++){
    //     cout << first[i] << endl;
    // }


    // forEach Loop

    // for(int i : second){
    //     cout << i << endl;
    // }



    // creation
    // vector<int> marks;
    // marks.reserve(10);

    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);

    // marks.pop_back();
    // marks.insert(marks.begin(), 50);
    // marks.clear();
    // cout << marks.size() << endl;
    // cout << marks.front() << endl;
    // cout << marks.back() << endl;

    // marks.empty() ? cout << "Vector is empty": cout << "Vector is not empty";


    // cout << marks.capacity() << endl;
    // cout << marks.max_size() << endl;


    // vector<int> miles(10);

    // vector<int> distance(15, 1);

    // int num = *(marks.begin());

    // cout << num;

    return 0;
}