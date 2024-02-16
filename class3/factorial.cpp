#include<bits/stdc++.h>
using namespace std;
vector<int> fact(vector<int> arr,int max){
    int fact = 2;
    arr.push_back(1);
    arr.push_back(2);
    for(int i=2;i<=max;i++){
        fact *= i;
        arr.push_back(fact);
    }

    return arr;
}
int main(){
    
    int t;
    cin>>t;

    vector<int> ans;

    while(t--){
         int ele;
         cin>>ele;
         if(ele == -1) break;
    
        ans.push_back(ele);

    }
    cout<<ans.size()<<"";
    // sort(ans.begin(),ans.end());
    // int max = ans[ans.size()-1];
    int max=*max_element(ans.begin(),ans.end()); // STL
     cout<<max<<"<-";
    vector<int> ans2  = fact(ans,max);
     cout<<ans.size()<<"";
    for(int i=0;i<ans.size();i++){
        cout<<ans2[i]<<" ";
     }

    return 0;
}