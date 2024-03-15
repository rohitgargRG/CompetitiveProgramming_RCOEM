#include<bits/stdc++.h>
using namespace std;
long long fibo(long long n){
    if(n == 0 ) return 1;
    if(n == 1) return 1;

    int a = 1;
    int b = 1;
    int c;
    for(long long i=0;i<n;i++){
        c= a+b;
        b = a;

    }

    return fibo(n-1)+fibo(n-2);
}
int main(){
    long long n;
    cin>>n;
    long long ans = fibo(n);
    cout<<ans;
    return 0;
}