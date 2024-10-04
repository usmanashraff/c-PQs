#include<iostream>
using namespace std;
int main(){
    // 1 2 3
    // 3 5 6
    // 7 8 9
    int n;
   cout<<"enter no: ";
   cin >> n;

   int count = 1;
   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
         cout << count << " ";
         count++;
      }
      cout << endl;
   }
   
   return 0;
}