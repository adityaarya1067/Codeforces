#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
 }
 int zero = 0;
 int maxi = 0;
 for(int i=0;i<n;i++){
 if(arr[i]==0)zero++;
 else zero =0;
 maxi = max(maxi,zero);
 }
 cout<<maxi<<endl;
  }
}
