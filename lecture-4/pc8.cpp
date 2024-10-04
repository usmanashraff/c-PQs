#include<iostream>
using namespace std;
int main(){
    // n = 4
   // 1 1 1 1
   //   2 2 2
   //     3 3
   //       4
   int n;
   cout<<"enter no: ";
   cin >> n;

   for(int i=0; i<n; i++){
      
      for(int j=0; j<i; j++){
        cout<<"  ";
      }

      for(int j=n; j>i; j--)
     { 
        cout << i+1;
     }
      cout << endl;
   }
   return 0;
}