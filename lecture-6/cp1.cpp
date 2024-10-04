#include<iostream>
using namespace std;
int decimalToBinary(int n){
    int ans = 0;
    int rem = 0;
    int pow = 1;
    while(n > 0){
        rem = n%2;
        n /= 2;
        ans += (rem*pow);
        pow = pow*10;
    }
    return ans;
}

int binaryToDecimal(int binary){
    int decimal = 0;
    int rem = 0;
    int pow = 1;
    while(binary > 0){
        rem = binary%10;
        binary /= 10;
        decimal += (rem*pow);
        pow *= 2;
    }
    return decimal;
}
int main(){
    // convert decimal to binary
    cout << "decimal to B: " << decimalToBinary(8) << endl;
   //cout << "B to Decimal: " << binaryToDecimal(1010) << endl;

   return 0;

}


// how to convert negative int to binary e.g. -8

// step.1 - convert int to binary 8 --> 1000
// step.2 - add most significant bit(MSB) --> 01000
// setp.3 takes one's complement(invert all) --> 10111
// setp.4 add 1 to that 10111
//                         +1
//                    ----------
//                      11000 final answer
