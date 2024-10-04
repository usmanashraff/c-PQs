#include<iostream>
using namespace std;
int main(){
    
    //check if character is small or capital 
    char ch;
    cout << "input character: ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z')
    cout << "character is small"<<endl;
    else if(ch >= 'A' && ch <= 'Z')
    cout << "character is capital"<<endl;

    return 0;
}