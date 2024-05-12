//Even Odds
#include <iostream>

using namespace std;

long long findNumber(long long n, long long k) {
    long long oddCount = (n + 1) / 2; 
    if (k <= oddCount) {

        return 2 * k - 1;
    } else {
        k -= oddCount;
        return 2 * k;
    }
}

int main() {
    long long n, k;
    cin >> n >> k;

    cout << findNumber(n, k) << endl;

    return 0;
}
