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
        sort(arr.begin(), arr.end()); // Sort the array in ascending order

        vector<long long> ans(n, 0);
        int j = n - 1;

        // Fill even indices with the largest elements
        for (int i = 0; i < n; i += 2) {
            ans[i] = arr[j];
            j--;
        }

        // Fill odd indices with the remaining elements
        for (int i = 1; i < n; i += 2) {
            ans[i] = arr[j];
            j--;
        }

        // Validate the rearranged array
        bool valid = true;
        long long sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += ans[i];
            if (ans[i + 1] == sum) { // Check if the next element equals the sum
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << "NO" << endl;
            continue;
        }

        // Output the result
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
