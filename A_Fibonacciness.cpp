#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  
 
  int a,b,d,e;
  cin>>a>>b>>d>>e;
  int ans=0;
  int c = a+b;
  

  if(a+b==c){
    ans++;
  }
  if(b+c==d){
    ans++;
  }
  if(c+d==e){
    ans++;
  }
  int c2 = e-d;
  int ans2= 0;
  
  if(a+b==c2){
    ans2++;
  }
  if(b+c2==d){
    ans2++;
  }
  if(c2+d==e){
    ans2++;
  }
  cout<<max(ans,ans2)<<endl;
  }
  }
