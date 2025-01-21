#include<bits/stdc++.h>
using namespace std;
int  main(){
long long t;
cin>>t;
while(t--){
long long   n;
cin>>n;
long long arr[n];
  for (int i = 0; i < n ; i++) {
  cin>>arr[i];
}
for(int i=0;i<n;i++){
arr[i]=arr[i]%2;
}
int count = 1;int ans = 0;
for(int i=0;i<n-1;i++){
  if((arr[i]^arr[i+1])==0){
    count++;
  }
  else{
    ans+=count-1;
    count=1;
    
  }
}
ans+=count-1;
cout<<ans<<endl;
  }
  }
