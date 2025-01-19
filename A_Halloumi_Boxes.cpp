#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
  long long n,k;
  cin>>n>>k;
  long long arr[n];
  bool p =true;
  for(long long i=0;i<n;i++){
    cin>>arr[i];
  }
  for(long long i=0;i<n;i++){
    if(arr[i]>arr[i+1]){
      p=false;
      break;
    }
  }
  if(p){
    cout<<"yes"<<endl;
    continue;
  }
  if(k<2)cout<<"no"<<endl;
  else cout<<"yes"<<endl;
  }
}
