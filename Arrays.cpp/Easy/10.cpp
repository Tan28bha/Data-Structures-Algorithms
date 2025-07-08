#include<bits/stdc++.h>
using namespace std;
// APPROACH -> INIT THE COUNT OF CNT AND MAXI AND THEN RUNS A FOR LOOP THROUGHOUT THE ARRAY SUCH THAT IF ARR[I]==1 ADD A COUNT OR ELSE CNT =0 AND THEN FIND THE MAXIMUM OF (MAXI,CNT) AND RETURN MAXI
int consecutiveone(int arr[],int n){
    int cnt=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        maxi=max(maxi,cnt);
    }
    return maxi;
}

int main(){
    int arr[]={1,1,1,1,0,1,1,0,1,1};
    int n=10;
    cout<<"The maximum no.of times the 1 appears is:"<<consecutiveone(arr,n);
}