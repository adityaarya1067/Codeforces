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
   sort(arr,arr+n);
   vector<int>b,c;
   b.push_back(arr[0]);
   for(int i=1;i<n;i++){
    if(arr[i]==b[0])b.push_back(arr[i]);
    else c.push_back(arr[i]);
   }
   if(c.empty())cout<<-1<<endl;
   else {
    cout<<b.size()<<" "<<c.size()<<endl;
    for(const auto i:b){
      cout<<i<<" ";
    }
    cout<<endl;
    for(const auto i:c){
      cout<<i<<" ";
    }
    cout<<endl;
   }
}
  }
