//standared template library
//vectors - dynamaic size
//push_back and pop_back, size, capacity
//stack memory, heap memory
//Single Number problem on leetcode
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    cout << "vector size: "<<vec.size()<<endl;
    cout << "vector capacity: "<<vec.capacity();
   
   return 0;
}