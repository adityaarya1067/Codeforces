#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
         int count = 1 ;
      int a = arr[0];
      for(int i=1;i<n;i++){
        if(a==arr[i])count++;
      }
      if (count==n) {
            cout << "NO" << endl;
            continue;
        }
        sort(arr.begin(), arr.end()); // Sort the array in ascending order

        vector<long long> ans(n, 0);
        int j = n - 1;
    int left=0,right=n-1;
        // Fill even indices with the largest elements
        for (int i = 0; i < n; i++) {
            if(i%2==0)ans[i] = arr[left++];
             else ans[i]=arr[right--];
        }
        
        // Fill odd indices with the remaining elements
        

        // Validate the rearranged array
     

        

        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
