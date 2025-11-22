#include <bits/stdc++.h>
using namespace std;

int longestsubarraynegative(vector<int>& arr,int k){
    int n=arr.size();
    int sum=0;
    int maxlen=0;
    map<int,int> preSumMap;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum == k){
            maxlen=max(maxlen,i+1);
        }
        int rem=sum-k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i-preSumMap[rem];
            maxlen=max(maxlen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum] = i;
        }
    }
    return maxlen;

}
int main(){
vector<int> a = { -1, 1, 1};
    int k = 1;
    int len =longestsubarraynegative(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}