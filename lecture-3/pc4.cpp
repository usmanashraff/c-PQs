#include<iostream>
using namespace std;
int main(){
    // pattern
    // ****
    // ****   (n * n)
    // **** 
    // ****
    int n;
    cout << "enter a numb: ";
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }   
   return 0;
}