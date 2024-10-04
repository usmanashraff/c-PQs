//max sub array problem
// brute force approach and with algo
// kadane's algorithem - leetcode
#include<iostream>
using namespace std;
void kadanesAlgo(int arr[], int n){

}
int main(){
    int n =5;
    int arr[n] = {1,2,3,4,5};

    int maxSum = 0;
    for(int st=0; st<n; st++){
        int arrSum = 0;
        for(int end=st; end<n; end++){
            arrSum += arr[end];
            maxSum = max(arrSum, maxSum);
        }
    }
    cout << "max subbarray sum: "<<maxSum <<endl;
   return 0;
}