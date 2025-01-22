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
  bool p =true;
  
  for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
      p=false;
      break;
    }
   
  }
  
  if(!p){
    cout<<0<<endl;
  continue;
  }




  int mini = INT_MAX;
  for(int i=0;i<n-1;i++){
    int p = arr[i+1]-arr[i];
    mini = min(mini,p);
  }
  if(mini<=0)cout<<1<<endl;
  else cout<<(mini/2)+1<<endl;;
  
  }
}
