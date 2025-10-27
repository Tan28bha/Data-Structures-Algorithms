#include<bits/stdc++.h>
using namespace std;

// OPTIMAL APPROACH -> RUN A FOR LOOP AND CHECK FOR NUMS WHILE GOING THROUGH THE ARRAY

int search(int arr[],int n,int num){
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]==num)
        return i;
    }
    return -1;
}

int main(){
    int arr[]={2,4,7,9,1,8,3,0};
    int n =8;  
    int num =4;
    cout<<"The element num:"<<""<< num <<endl<<"found in index:"<<""<<search(arr,n,num);
}