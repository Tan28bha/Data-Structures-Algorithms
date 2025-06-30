#include<iostream>
using namespace std;

int removeduplicates(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;

        }
    }
    return i+1;
}

int main(){
    int arr[]={2,2,3,3,3,3,3,4,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=removeduplicates(arr,n);
    cout<<"After removing duplicates from the array , the new array is :"<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }

}