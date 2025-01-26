#include<bits/stdc++.h>
using namespace std;
int main(){
 
  int t;
  cin>>t;
  while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = 0;
    int ydiff =  d-b;
    ans+= abs(ydiff);
    if(ydiff<0){
      cout<<-1<<endl;
      continue;
    }
    a = a+ydiff;
    int xf = c-a;
    if(xf>0){
      cout<<-1<<endl;
      continue;
    }
   ans+=abs(xf);
    
    cout<<ans<<endl;
  }
    
  
}