#include<bits/stdc++.h>
using namespace std;
    
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    int j=n-1;
    bool flag = false;
    while(i<j){
        if(arr[i] == arr[j]){
            flag = true;
            i++;
            j--;
        }
        else{
            flag = false;
            i++;
            j--;
        }
    }

    if(flag == true) cout<<"Yes";
    else cout<<"No";

    return 0;
}