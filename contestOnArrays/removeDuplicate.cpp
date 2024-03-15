#include<bits/stdc++.h>
using namespace std;
    
int main(){
    long long T;
    cin>>T;
    
    

    bool flag = true;
    while(T--){
        long long N;
        cin>> N;

        long long arr[N];
        for(long long i=0;i<N;i++){
            cin>>arr[i];
        }
        
        set<long long> s;
        for(auto it:arr){
            s.insert(it);
        } 

        for(auto it:s){
            cout<<it<<" ";
        }
        

    }
    return 0;
}