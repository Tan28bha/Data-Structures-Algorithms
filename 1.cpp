#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    // BRUTE FORCR APPROACH -> using sort the array then returning the last element as the largest element
// Time Complexity: O(N*log(N))
// Space Complexity: O(n)

int largestelement(vector<int>& arr){
sort(arr.begin(),arr.end());
return arr[arr[0]];
}

int main(){
    vector<int> arr1={4,5,1,7,2,8,9};
    cout<<"The largest element in the array is:"<<largestelement(arr1);
    return 0;
}




// Optimal Approach -> initialize max contaioner with array[0] and then the comparing it with the other elements in the array and if any element is found in greater than the max then saving ther element in the array.
// Time Complexity: O(N)
// Space Complexity: O(1)\

int largestelement(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={3,6,8,1,3,0};
    int n=6;
    cout<<"The largest element in the array is:"<<largestelement(arr,n);
    return 0;
}
