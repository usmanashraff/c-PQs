#include<iostream>
using namespace std;
int main(){
    // fac of a number
    int a;
    cout <<"enter a : ";
    cin>>a;
    int fact = 1;

    for(int i=1; i<=a; i++)
      fact *= i;
      
    cout << "factorial of number a is: " << fact << endl; 
    
}