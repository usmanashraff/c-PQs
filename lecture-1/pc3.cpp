#include<iostream>
using namespace std;
int main(){
    //min of 2 numbers
    int a,b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    if(a < b)
      cout << "a is minimum"<<endl;
    else if(b < a) 
      cout << "b is minimum"<<endl;
    else 
     cout << "a and b are equal"<<endl;


}