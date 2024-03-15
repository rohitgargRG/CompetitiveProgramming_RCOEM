#include<bits/stdc++.h>
using namespace std;
    
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long min = arr[0];
    int minIdx = 0;
    
    
    for(int i=0;i<n;i++){
        if(min > arr[i]){
            min = arr[i];
            minIdx = i;
        }
        
    }
    cout<<minIdx;
    return 0;
}