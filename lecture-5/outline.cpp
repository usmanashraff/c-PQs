// built in and user defined functions
// functions in memory - stack
// parameters pass by value - pass by reference(pointers)
// calculate sum of digits of N
#include<iostream>
using namespace std;

void sumOfDigits(int n){
    int sum =0;
    int remainingN = n;
    while(remainingN != 0){
        sum += remainingN%10;
        remainingN = remainingN/10;
    }
    cout<<"sum of digits are: "<< sum<<endl;

}

int factorial(int n){
    int fac = 1;
    for(int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}

//print prime numbers from 1 to N
void printPrime(int n){

    for(int i=1; i<=n; i++){
        bool flag = true;
        for(int j=2; j<i; j++){
            if(i%j == 0){
                flag = false;
            }
        }
        if(flag)
        cout << i << endl;
    }
}


void printFeboo(int n){
   int first = 0; 
   int sec = 1;
   int nextVal = 0;
    for(int i=0; i<n; i++){
      nextVal = first + sec;
     // cout << nextVal << endl;
      first = sec;
      sec = nextVal;
    }
    cout<<nextVal<<endl;
}
int main(){

    int n = 20;
    printFeboo(n);
   return 0;
}