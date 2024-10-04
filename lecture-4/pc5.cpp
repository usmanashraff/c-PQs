#include<iostream>
using namespace std;
int main(){

   // 1
   // 12
   // 123
   // 1234
   int n;
   cout<<"enter no: ";
   cin >> n;

   for(int i=0; i<n; i++){
      for(int j=0; j<=i; j++){
         cout << j+1 << " ";
      }
      
      cout << endl;
   }
   return 0;
}