#include<bits/stdc++.h>
using namespace std;

// OPTIMAL APPROACH -> Using xorr approach traversing through each array and returning xorr


int getsingleelement(vector<int> &arr){
    int xorr=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        xorr=xorr^arr[i];
    }
return xorr;
}

int main(){
    vector<int> arr={4,1,2,1,2};
    int ans = getsingleelement(arr);
    cout<<"The single element is:"<<ans;
}