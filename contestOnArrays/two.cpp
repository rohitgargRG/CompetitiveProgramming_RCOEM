#include<bits/stdc++.h>
using namespace std;
    
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(x == arr[i]){
            cout<<"Yes";
            flag = true;
            break;
        }
        
    }
    if(flag == false) cout<<"No";
    return 0;
}