#include<iostream>
using namespace std;
int main(){

   int n;
   cout << "enter no: ";
   cin >> n;

   int i = 1, result = 1;
   while(result <= n){
     i++;
     result = i*i;
   }
   cout << "sq is: "<< i-1 <<endl; 
   return 0;
}