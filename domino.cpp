#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> upper(n), lower(n);
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++) {
        cin >> upper[i] >> lower[i];
        sum1 += upper[i];
        sum2 += lower[i];
    }
    if(sum1 % 2 == 0 && sum2 % 2 == 0) {
        cout << 0;
    } else if(sum1 % 2 != sum2 % 2) {
        cout << -1;
    } else {
        bool canSwap = false;
        for(int i = 0; i < n; i++) {
            if(upper[i] % 2 != lower[i] % 2) {
                canSwap = true;
                break;
            }
        }
        if(canSwap) {
            cout << 1;
        } else {
            cout << -1;
        }
    }
    return 0;
}
