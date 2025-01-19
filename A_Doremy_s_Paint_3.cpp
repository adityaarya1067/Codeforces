
#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
   
int n;
cin>>n;

    int a[n];
    map<int,int> mpp;
    for(int i=0;i<n;i++){
      cin>>a[i];
      mpp[a[i]]++;
    }
    if(mpp.size()>2){
      cout<<"No"<<endl;
      continue;
     }
     bool p=true;
    for(const auto it:mpp){
      if(it.second<(n/2)){
        p=false;
      }

    }
    if(p)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
   
  }
}

 