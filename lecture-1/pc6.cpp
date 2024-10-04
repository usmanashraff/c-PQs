#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //check if num if prime or not

    int input;
    cout << "input a numb: ";
    cin >> input;
    
    bool flag = true;
    for(int i = 2; i*i <= input; i++)
      if(input % i == 0){
        cout << "number is not prime";
        flag = false;
        break;
      }

    if(flag)
    cout << "number is prime" ;  
    return 0;
}