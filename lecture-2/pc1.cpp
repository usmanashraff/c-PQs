#include<iostream>
using namespace std;
int main(){
    // learned about the following this in this lecture
    // input, out
    // boilerplate code
    // variables and data types (premitive)
    // type casting - (implicit and explicit)
    // operators - (arthematic, logical and relational)
    // unary operators - (pre,post)
    // also the homework problem is solved below(calculater)

    int a,b;
    char op;
    cout << "enter 1st number: ";
    cin >> a;
    cout << "enter 2nd number: ";
    cin >> b;
    cout << "enter operator: ";
    cin >> op;

    if(op == '+')
    cout << "sum of both is: "<< a+b << endl;
    if(op == '-')
    cout << "diff of both is: "<< a-b << endl;
    if(op == '*')
    cout << "product of both is: "<< a*b << endl;
    if(op == '/')
    cout << "divison of a over b is: "<< a/b << endl;
    if(op == '%')
    cout << "remainder of a over b is: "<< a%b << endl;
    return 0;
}