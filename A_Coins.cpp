#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int p = k*k - 4*(2)*(-n);
int l = sqrt(p);
if(l*l==p || k==n || n%2==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
  }
  }
