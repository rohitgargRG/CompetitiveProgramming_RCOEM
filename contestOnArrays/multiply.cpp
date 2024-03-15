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
        
        long long mul =1;
        for(long long i=0;i<N;i++){
            mul *= arr[i]; 
        }
     cout<<mul<<endl;   
    }
    return 0;
}