#include<bits/stdc++.h>
using namespace std;
int main(){
 
  int t;
  cin>>t;
  while(t--){
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   int odd = 0;
   map<char,int>mpp;
   for(int i=0;i<n;i++){
    mpp[s[i]]++;
   }
   for(const auto it:mpp){
    if(it.second%2==1)odd++;
   }
   if(odd-1>k){
    cout<<"NO"<<endl;

   }
   else cout<<"YES"<<endl;
  }
    
  
}