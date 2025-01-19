#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
  int n,x;
  cin>>n>>x;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maxi = 0;
  for(int i=0;i<n-1;i++){
  maxi = max(arr[i+1]-arr[i],maxi);
  }
  cout<<max({maxi,arr[0]-0,(x-arr[n-1])*2})<<endl;
  }
}
