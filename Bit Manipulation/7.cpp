// Count number of bits to be flipped to convert A to B

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countnumbers(int start,int goal){
    int xorValue=start^goal;
    int count=0;
    for(int i=0;i<32;i++){
        count+=(xorValue&1);
        xorValue=xorValue>>1;
    }
    return count;
}

int main(){
    int start=10, goal =7;
    int ans=countnumbers(start,goal);
    cout<<"The number of bits to be flipped to convert A to B is"<<ans<<endl;
    return 0;

}