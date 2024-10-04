#include<iostream>
using namespace std;
int main(){

   // 1
   // 2 1
   // 3 2 1
   // 4 3 2 1
   int n;
   cout<<"enter no: ";
   cin >> n;

   for(int i=0; i<n; i++){
      for(int j=i; j>=0; j--){
        cout << j+1 << " ";
      }
      cout << endl;
   }
   return 0;
}