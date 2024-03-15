#include<bits/stdc++.h>
using namespace std;
    
int main(){
    long long N;
    cin>>N;
    long long arr[N];
    for(long long i = 0;i<N;i++){
        cin>>arr[i];
    }

    unordered_map<long long,long long> mpp;
    for(long long i = 0;i<N;i++){
        mpp[arr[i]]++;
    }

    

    cout<<mpp.size();
 
    return 0;
}