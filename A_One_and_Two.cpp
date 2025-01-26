#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    int num= 0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]==2)num++;
    }
    if(num%2==1){
        cout<<-1<<endl;
        continue;
    }
    else if(num==0){
        cout<<1<<endl;
        continue;
    }
    int div = num/2;
    int ans = 0;
    int i =0 ;
    while(div){
        if(arr[i]==2){
            div--;
        }
        i++;
    }

    cout<<i<<endl;
    
  }
}