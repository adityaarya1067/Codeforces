#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
vector<int> v;
for(int i=0;i<n;i++){
  cin>>arr[i];
  if(arr[i]==1)v.push_back(i);
}
if(v.empty()){
cout<<n<<endl;
continue;
}
int maxi = 0;
for(int i = 0;i<v.size()-1;i++){
  maxi = max(maxi,v[i+1]-v[i]-1);
}
int k = v.size()-v[v.size()-1]-1;
maxi = max(maxi,v[0]-0);
maxi= max(maxi,k);

cout<<maxi<<endl;
  }
}
