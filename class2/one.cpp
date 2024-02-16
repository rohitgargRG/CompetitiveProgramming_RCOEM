#include<bits/stdc++.h>
using namespace std;
    
int main(){
    
    int n = 1234;
    string str = to_string(n);
    int cnt =0;
    while(n!=0){
        cnt++;
        n /= 10;
    }
    cout<<cnt;
    return 0;
}