#include<bits/stdc++.h>
using namespace std;
long long fact(int n){
    if(n == 0 || n==1) return 1;
    
    return n*fact(n-1);
}
// long fact1(int n){
//     int fact = 1;

//     for(int i=0;i<n;i++){

//     }
// }
int main(){
    long long n = 56;
    cout<<fact(n);
    return 0;
}