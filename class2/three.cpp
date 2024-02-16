#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n = 1221;
    int temp = n;
    int sum=0;

    while(n != 0){
        int ld = n%10;
        sum = sum*10 + ld;
        n /= 10;
    }
    if(sum == temp) cout<<"pallindrome";
    else cout<<"not a pallindrome";

    return 0;
}