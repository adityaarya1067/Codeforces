#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n,k,x;
  cin>>n>>k>>x;
  
    if(k==x && x==1){
    cout<<"NO"<<endl;
    continue;
  }
   if(x!=1){
    cout<<"YES"<<endl;
    cout<<n<<endl;
    for(int i=1;i<=n;i++){
      cout<<1<<" ";
    }
    cout<<endl;
    continue;
   }
   if(x==1){
    vector<int> ans;
    if(k<=2 && n%2==1){
       cout<<"NO"<<endl;
    continue;
    }
    while(n>0){
      if(n==3){
        ans.push_back(3);
        n-=3;
      }
      if(n>=2){
        ans.push_back(2);
        n-=2;
    }
   }
    cout<<"YES"<<endl;
    cout<<ans.size()<<endl;
    for(const auto i:ans){
      cout<<i<<" ";
    }
    cout<<endl;
  }
   
  }
}
