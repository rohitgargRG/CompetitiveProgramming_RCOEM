#include<bits/stdc++.h>
using namespace std;
    
int main(){
    
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }

    
    long long cnt = 0;

    for(long long i=1;i<n;i++){
        if(arr[i]< arr[i-1] && arr[i] < arr[i+1]) cnt++;
        
    }
    cout<<cnt;
    return 0;
}