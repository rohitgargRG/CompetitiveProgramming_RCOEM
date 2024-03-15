#include<bits/stdc++.h>
using namespace std;
    
int main(){
    long long N;
    cin>>N;
    long long arr[N];
    for(long long i = 0;i<N;i++){
        cin>>arr[i];
    }

    long long count[N+1] = {0};
    for(long long i = 0;i<N;i++){
        count[arr[i]]++;
    }

    for(long long i = 1;i<=N;i++){
        cout<<i<<": "<<count[i]<<endl;
    }
 
    return 0;
}