#include<iostream>
using namespace std;
int main(){
    //sum of nukmbers from 1 to N
    int n;
    cout << "enter n number: ";
    cin >> n;
    
    int sum = 0;
    for(int i=0; i<=n; i++)
      sum += i;
    cout << "sum of n is: " << sum << endl;

}