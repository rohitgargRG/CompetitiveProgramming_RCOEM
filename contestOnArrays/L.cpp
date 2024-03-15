#include<bits/stdc++.h>
using namespace std;
    
int main(){
    long long N;
    cin>>N;

    vector<long long> arr;
    for(long long i = 0;i<N;i++){
        long long ele;
        cin>>ele;

        arr.push_back(ele);
    }

    cout<<*max_element(arr.begin(),arr.end());
    return 0;
}
