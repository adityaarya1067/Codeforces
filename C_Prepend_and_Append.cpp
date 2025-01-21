#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
int ans = s.length();
int i= 0,j=ans-1;
while(i<j){
  if((s[i]^s[j])!=1){
    break;
  }
 ans-=2;
 i++;j--;
}
cout<<ans<<endl;
  }
  }
