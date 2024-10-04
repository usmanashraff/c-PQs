#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void isPrime(int n, int index){
   bool falg = true;
  for(int i=2; i<n; i++){
     if(n%i == 0)
      falg = false;
  }
  if(falg)
    cout << n << " is: "<< "prime no."<<endl;
else
  cout << n << " is: "<< "not prime no."<<endl;
}

int main(){
   int arr[10] = {14, 3, 5, 7, 11, 13, 17, 19, 23, 29};
   for(int i=0; i<10; i++)
     isPrime(arr[i], i);
   return 0;
}