// OPTIMAL APPROACH -> Save the arr[0] in a temp and run a for loop so that arr[i+1] will have the position of the arr[i] and after that assign the position of arr[n-1] to the temp after that runs a for loop to print the array 

#include<iostream>
using namespace std;

void movebyone(int arr[],int n){
    int temp=arr[0];
    for (int i = 0; i < n-1; i++)
    {
       arr[i]=arr[i+1];
    }
    arr[n-1]= temp;    
    for(int i=0;i<n;i++){
        cout<< arr[i]<<"";
    }
}

int main(){
    int arr[]={2,4,5,6,1,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    movebyone(arr,n);
    return 0;
}