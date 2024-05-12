#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int max_balance = n;

    // If n is non-negative or single digit, return n
    if (n >= 0 || n > -10) {
        cout << n << endl;
    } else {
        // Remove the last digit
        int withoutLast = n / 10;
        // Remove the second last digit
        int withoutSecondLast = (n / 100) * 10 + abs(n % 10);

        // Output the maximum value after removal
        max_balance = max(withoutLast, withoutSecondLast);
        cout << max_balance << endl;
    }

    return 0;
}
