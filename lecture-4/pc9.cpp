#include<iostream>
using namespace std;
int main(){
// n = 4    
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1


int n = 4;
for(int i=0; i<n; i++){

    // print spaces
   for(int j=n; j>i; j--){
      cout << "  ";
   }
   for(int j=0; j<=i; j++){
      cout << j+1 << " ";
   }

   for(int j=i; j>0; j--){
      cout <<j << " ";
   }

   cout << endl;
}

   
   return 0;
}