#include<iostream>
using namespace std;
int main(){
    int x = 121;
     int newx = 0;
     int xcopy = x;
        while(x > 0){
            newx = (newx *10) + (x%10);
            x /= 10;
        }
        // if(newx == x)
        cout<<newx<< " - " << xcopy<<endl;
        // cout << "true"<<endl;
        // else
        // cout<<"false"<<endl;
   return 0;
}