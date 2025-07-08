#include<bits/stdc++.h>
using namespace std;

// APPROACH -> first take two pointers low and high and then for low<=high runs a while loop and check for the condition given below 

int binarySearch(vector <int> & nums,int target){
    int n=nums.size();
    int low =0 , high = n-1;
    while(low<=high){
        int mid = (low +high)/2;
        if(nums[mid]==target) return mid;
        else if(target > nums[mid]) low=mid+1;
        else high = mid-1;
    }
    return -1;
}

int main(){
    vector<int> nums = {3,4,6,7,9,12,16,17};
    int target =12;
    int ans = binarySearch(nums,target);
    if(ans ==-1) cout<<"The target is not found";
    else cout<<"The target is at index:"<<ans<<endl;
    return 0;
}