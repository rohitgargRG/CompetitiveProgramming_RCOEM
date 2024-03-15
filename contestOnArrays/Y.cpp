#include<bits/stdc++.h>
using namespace std;
    
int main(){
    long long T;
    cin>>T;

    long long N;
    cin>>N;
    
    long long arr[N];
    for(long long i=0;i<N;i++){
        cin>>arr[i];
    }

    bool flag = true;
    while(T--){
        long long cnt = 1;
        bool flag = true;
        for(long long i=0;i<N;i++){
            for(long long j=i+1;j<N;j++){
                if(arr[i] + arr[j] == 2000){
                    flag = false;
                    cnt++;
                    break;
                }
            }
            if(cnt == 2){
                cout<<"Accepted"<<endl;;
                break;
            }
            
        }
        if(flag == true) cout<<"Rejected"<<endl;
    }
    
    return 0;
}