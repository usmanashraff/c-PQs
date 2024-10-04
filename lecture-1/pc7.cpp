#include<iostream>
using namespace std;
int main(){
    // cal simple interest

    int p, r,t;
    cout << "input principle: ";
    cin >> p;
    cout << "input rate: ";
    cin >> r;
    cout << "input time: ";
    cin >> t;

    cout << "simple interest is: " << p*r*t << endl;
    return 0;
}