#include<bits/stdc++.h>
using namespace std;
int main(){
 
  int t;
  cin>>t;
  while(t--){
long long n,k,x;
cin>>n>>k>>x;
long long sum = 0;
while(k>0 && x<=sum){
sum+= n;
k--;
n--;
}
    if(sum>=x && k<=0){
      cout<<"YES"<<endl;

    }
    else cout<<"NO"<<endl;
  
}
}