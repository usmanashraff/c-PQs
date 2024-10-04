#include<iostream>
using namespace std;

//sum and pruduct
void sumAndProduct(int arr[], int s){
    int sum =0 , product = arr[0];
    for(int i=0; i<s; i++){
      sum += arr[i];
      product *= arr[i];
    }

    cout << "sum: " <<sum<<endl;
    cout << "product: "<<product<<endl;
}

void swapMinMax(int arr[], int s){
    int min = arr[0];
    int max = arr[0];
    int minIndex =0;
    int maxIndex =0;
    for(int i=0; i<s; i++){
        if(arr[i] < min){
            min = arr[i];
            minIndex = i;
        }
        if(arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }
    }

     int temp = arr[minIndex];
     arr[minIndex] = arr[maxIndex];
     arr[maxIndex] = temp;
    //cout << "min: "<<minIndex << " max: " <<maxIndex<<endl;

}

void printUnique(int arr[], int s){
    for(int i=0; i<s; i++)
    {
        bool flag = true;
        for(int j=0; j<s; j++){
            if(i != j && arr[i] == arr[j])
            flag = false;
        }
        if(flag)
          cout << "uni ele: "<<arr[i]<<endl;
    }
}


void printOneTime(int arr[], int s){
    int count = 0;
    for(int i=0; i<s; i++){
        count = 0;
        for(int j=0; j<s; j++){
            if(i != j && arr[i] == arr[j])
            count++;
        }
    }
}
int main(){
    int arr[7] = {4,2,2,4,5,6,7};
    //sumAndProduct(arr, 5);
   // swapMinMax(arr, 5);
     printUnique(arr, 7);
   return 0;
} 