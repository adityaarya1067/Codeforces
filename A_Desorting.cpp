#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  int arr[n];
 
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int mini = 0;
  for(int i=0;i<n-1;i++){
    int p = arr[i+1]-arr[i];
    mini = min(mini,p);
  }
  if(mini<=0)cout<<0<<endl;
  else cout<<(mini+1)/2<<endl;;
  // cout<<endl;
  }
}
