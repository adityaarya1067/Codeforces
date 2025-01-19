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
    int ans = 0 ;
 

     int maxi = 0;
   int p = 0;
   for(int i=0;i<n;i++){
  if(s[i]=='.')p++;
      int num = 0 ;
     for(int j=i;j<n;j++){
      if(s[j]=='.'){
        num++;
      }
      else break;
     }
     maxi = max(num,maxi);
   }
   if(maxi>2)ans= 2;
   else ans= p;
   cout<< ans<<endl;
  }
}
