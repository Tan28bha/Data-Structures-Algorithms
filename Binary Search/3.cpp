#include <bits/stdc++.h>
using namespace std;
int upperbound(vector<int> &arr,int n,int x){
    int low=0,high=n-1;
    int ans=n;

    while(low<=high){
        int mid = low+high/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }
    else{
        low=mid+1;
    }    }
    return ans;
}

int main(){
    vector<int> arr={3,5,8,9,15,19};
    int n=6,x=9;
    int ind=upperbound(arr,x,n);
    cout<<"The upper bound is at that index:"<<ind<<"\n";
    return 0;
}