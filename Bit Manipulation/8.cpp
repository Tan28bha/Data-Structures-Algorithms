// Find the number that appears odd number of times

#include<bits/stdc++.h>
using namespace std;

int appears(vector<int>&nums){
    int res=0;
    for(int i=0;i<nums.size();i++){
        res=res^nums[i];
    }
    return res;
}
int main(){
vector<int>nums={1,2,2,4,3,1,4};
int ans=appears(nums);
cout<<"The single number in given array is:"<<ans<<endl;
return 0;

}
