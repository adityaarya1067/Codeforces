#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int x,k;
  cin>>x>>k;
  int temp = x;
  while(temp%k==0){
    temp--;
  }
  if(temp==x){
    cout<<1<<endl;
    cout<<temp<<endl;
  }
  else {
    cout<<2<<endl;
    cout<<temp<<" "<<x-temp<<endl;
  }
  }
}
