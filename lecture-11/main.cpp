#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//majority element - leetcode - brute force - optimize and morrse algo
//pair sum with 2 pointer approach
vector<int> pairSum(vector<int>& vec, int target){
    vector<int> ansVec;
    int i =0, j=vec.size()-1;
    while(i < j){
        int sum = vec[i] + vec[j];
        if(sum < target){
            i++;
        }else if(sum > target){
            j--;
        }else{
            ansVec.push_back(i);
            ansVec.push_back(j);
            return ansVec;
        }
    }
    return ansVec;
}

int majorityElement(vector<int>& vec){
    sort(vec.begin(), vec.end());
    int ans = vec[0];
    int freq = 1;
    for(int i=1; i<vec.size(); i++){
        if(vec[i] == ans){
            freq++;
        }else{
            freq = 1;
            ans = vec[i];
        }
        if(freq > vec.size()/2)
        return ans;
    }
    return -1;
}
int main(){
    vector<int> vec = {1,2 ,2,2,2,2,1,1};
    cout << majorityElement(vec);
   return 0;
}