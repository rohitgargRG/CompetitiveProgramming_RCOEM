#include<bits/stdc++.h>
using namespace std;
    
int main(){
        long long N;
        cin>> N;

        long long K;
        cin>> K;

        long long arr[N];
        for(long long i=0;i<N;i++){
            cin>>arr[i];
        }

        for(long long i=0;i<N;i++){
            if(arr[i] == K){
                cout<<i;
                break;
            }
        }


    return 0;
}