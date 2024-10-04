#include<iostream>
using namespace std;
int main(){
   // sum of odd numbers from 1 to N
   int n;
   cout << "enter a number: ";
   cin >> n;

   int sum = 0;
   for(int i=1; i<=n; i++){
    if(i%2 != 0)
     sum += i;
   }

   cout << "sum of all odd till N is: "<< sum << endl;
   return 0;
}