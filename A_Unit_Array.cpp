#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  int a[n];
  int neg= 0,pos=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<0)neg++;
    else pos++;
  }
  if(pos>=neg){
    if(neg%2==1)cout<<1<<endl;
    else cout<<0<<endl;
  }
  else{
    int p =neg-pos;
    int add = (p+1)/2;
    neg -= add;
    if(neg%2==1)add++;
    cout<<add<<endl;
    
  }

  }
}
