
#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
   
int n;
cin>>n;

    int b[n];
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    vector<int> ans;
    if(n==1){
      cout<<1<<endl;
      cout<<b[0]<<endl;
      continue;
    }
   
    ans.push_back(b[0]);
    for(int i=1;i<n-1;i++){
      
      if(b[i-1]>b[i]){
      // int l = min(b[i],b[i-1]);
      
      // l--;
      ans.push_back(1);
      }
       ans.push_back(b[i]);
     
    }
    if(b[n-2]>b[n-1]){
      // int l = min(b[n-2],b[n-1]);
      // l--;
      ans.push_back(1);
      }
      ans.push_back(b[n-1]);
      cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
    
  }
}

 