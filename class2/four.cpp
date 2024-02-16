#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n = 153;
    int temp =n;
    int n1 = n;

    int cnt =0;
    while(n!=0){
        cnt++;
        n /= 10;
    }
    cout << cnt<<endl;

    int sum=0;

    while(n1 > 0){
        int ld = n1%10;
        
        sum = sum +  pow(ld,3);
        n1 /= 10;
        
    }
    cout<<sum<<endl;
    if(sum == temp) cout<<"armstrong number";
    else cout<<"not an armstrong number";

    
    return 0;
}