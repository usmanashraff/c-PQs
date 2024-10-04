#include<iostream>
using namespace std;
int main(){
    
    //print counting till n with all loops loop
    int n;
    cout << "input n: ";
    cin >> n;
    int count = 1;
    cout << "counting using while looop"<<endl;
    while(count <= n){
        cout << count << endl;
        count++;
    }

    cout << "counting using for looop"<<endl;
    for(int i=1; i<=n; i++)
    cout << i << endl;

    cout << "counting using do-while looop"<<endl;
    int i = 1;
    do{
        cout << i << endl;
        i++;
    }while(i <= n);
   
    return 0;
}