#include<iostream>
using namespace std;
int main(){
    //max of 2 numbers
    int a,b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    if(a > b)
      cout << "a is max"<<endl;
    else if(b > a) 
      cout << "b is max"<<endl;
    else 
     cout << "a and b are equal"<<endl;


}