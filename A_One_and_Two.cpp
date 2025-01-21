#include<bits/stdc++.h>
using namespace std;
int  main(){
long long t;
cin>>t;
while(t--){
long long   n;
cin>>n;
long long  arr[n];
for(long long   i=0;i<n;i++){
  cin>>arr[i];
}
long long  i=0,j=n-1;

long long  sum1=1,sum2=1;
while(i<j){
if(sum1>=sum2){
sum2*=arr[j];
j--;
}
else{
  sum1*=arr[i];
   i++;
}
}
if(sum1==sum2)cout<<i<<endl;
else cout<<-1<<endl;
  }
  }
