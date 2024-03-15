#include<bits/stdc++.h>
using namespace std;
    
int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    long long int cnt = 0;
    

    for(long long i=1;i<n-1;i++){
        if((arr[i]> arr[i-1]) && (arr[i] > arr[i+1])) cnt++;      
    }
    cout<<cnt;
    return 0;
}