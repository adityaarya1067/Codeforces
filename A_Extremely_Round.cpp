#include<bits/stdc++.h>
using namespace std;
int  main(){
long long t;
cin>>t;
while(t--){
long long   n;
cin>>n;
string s = to_string(n);
int ans = 0 ;
ans+= 9*(s.length()-1);
ans+= n/pow(10,s.length()-1);
cout<<ans<<endl;
  }
  }
