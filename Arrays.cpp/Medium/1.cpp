#include <bits/stdc++.h>
using namespace std;

string twosum(int n,vector<int> &arr,int target){
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int moreneeded = target - num;
        if(mpp.find(moreneeded) !=mpp.end()){
            return "Yes";
        }
        mpp[num] = i;
    }
    return "NO";
}

//  Optimal Approach 

string twosumo(int n, vector<int> &arr, int target){
    sort(arr.begin(),arr.end());
    int left=0,right=n-1;
while(left<right){
    for(int i=0;i<n;i++){
    int sum = arr[left] + arr[right];
    if(sum ==target){
        return "Yes";
    }
    else if(sum < target){
        left++;
    }
    else right --;
}
return "NO";
}
}

int main(){
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twosumo(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}