#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

int t;
cin>>t;
while(t--){

long long n,x;
cin>>n>>x;
long long arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

sort(arr,arr+n);
long long maxi = arr[n-1];
long long l = 1;
for(int i=n-2;i>=0;i--){
    int p=l*x;
    maxi= max(maxi,arr[i]+p);
    l++;
}

cout<<maxi<<endl;
}
}

