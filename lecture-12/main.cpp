// x ^ 2 question
#include<iostream>
using namespace std;
int xPower(int n, int x){   // binary exponentiation with O(log n +1)
    
    long binForm = n;
    if(binForm<0){
      binForm = -binForm;
      x = 1/x;
    }
    double ans = 1;
    while(binForm > 0){
      if(binForm%2 == 1)
        ans *= x;
      x *= x;
      binForm /= 2;
    }
   return ans;
}
int main(){
    cout<<xPower(-10, 10)<<endl;
   return 0;
}