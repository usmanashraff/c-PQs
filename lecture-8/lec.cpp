// arrays - non-premitive -1st data structure
// find min and max from array
// pass by reference for non-premitive data type
// reverse and array
// linear search 

#include<iostream>
using namespace std;
int findMin(int arr[], int n){
    int mini = arr[0];
    for(int i=0; i<n; i++){
        mini = min(arr[i], mini);
    }
    return mini;
}

int findMax(int arr[], int n){
    int maxi = arr[0];
    for(int i=0; i<n; i++){
        maxi = max(arr[i], maxi);
    }
    return maxi;
}

void linearSearch(int arr[], int size, int numb){
    bool isFound = false;
    for(int i=0; i<size; i++){
        if(numb == arr[i])
        {
            cout << "element found !" << endl;
            isFound = true;
            break;
        }
    }
    if(!isFound)
    cout << "element not found!"<<endl;
    return;
    
}

void reverseArr(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start < end && start != end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main(){
    int n = 7;
    int arr[n] = {4,89,100, 66, 100,5,6};
    // cout << "min is: "<< findMin(arr, n)<<endl;
    // cout << "max is: "<<findMax(arr, n)<<endl;

    //linearSearch(arr, n, 66);
    reverseArr(arr, n);
    for(int i=0; i<n; i++)
    cout << arr[i] << " ";
   return 0;
}

//HW
// cal sum and product of all number
// swap min and max numb of array
// print all unique values
// print intersection of 2 arrays