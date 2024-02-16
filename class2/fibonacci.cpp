#include<bits/stdc++.h>
using namespace std;
int printFibo(int n){
    if(n == 0 ) return 0;
    if(n==1) return 1;

    return printFibo(n-1)+printFibo(n-2);
}
int main(){
    
    int a = 0;
    int b=1;
    int n;
    cin>>n;
    
    if(n == 0 || n== 1) cout<<n<<" ";
    else{
        cout<<0<<" "<<1<<" ";
        for(int i=2;i<n;i++){
            int c = a+b;
            a = b;
            b = c;

            cout<<c<<" ";
        }
    } 
    
        
    
    return 0;
}