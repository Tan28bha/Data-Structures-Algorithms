// OPTIMAL APPROACH 1 -> FIRST find the sum from 1 to n and then find the sum of all elements in the array and after that subtract all this ,it will return the missing number.

// #include<bits/stdc++.h>
// using namespace std;

// int missingnum(int arr[],int n){
//     int sum = (n*(n+1))/2;
//     int s2 =0;
//     for(int i=0;i<n-1;i++){
//         s2+=arr[i];
//     }
//     int missingnumber = sum -s2;
//     return missingnumber;
// }

// int main(){
//     int arr[]={1,2,4,5};
//     int n=5;
//     cout<<"The missing number is :"<<missingnum(arr,n);
//     return 0;
// }

// OPTIMAL APPROACH 2 -> Using xor approach where xor 1 defines the element from 1 to n and xor2 defines the element of the array.

#include<bits/stdc++.h>
using namespace std;

int missingnum(int arr[],int n){
    int xor1=0,xor2=0;
    for(int i=0;i<n-1;i++){
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    return (xor1^xor2);
}
int main(){
    int arr[]={1,2,4,5};
    int n=5;
    cout<<"The missing number is :"<<missingnum(arr,n);
    return 0;
}