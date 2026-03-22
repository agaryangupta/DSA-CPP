#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    const int MOD = 1e9 + 7;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());

        long long profit = 0;

        for (int i = 0; i < N; i++) {
            long long value = arr[i] - i;
            if (value > 0) {
                profit = (profit + value) % MOD;
            }
        }

        cout << profit << endl;
    }
}