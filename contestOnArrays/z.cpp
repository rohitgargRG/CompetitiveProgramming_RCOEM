#include<bits/stdc++.h>
using namespace std;
    
int main(){
    long long T;
    cin>>T;

    while(T--){
        long long L,R;
        cin>>L>>R;
        long long cnt = 0;
        for(long long i=L ;i<=R;i++){
            if(i%10 == 2 || i%10 == 3 || i%10 == 9) cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}