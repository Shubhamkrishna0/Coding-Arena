#include <iostream>
#include <string>

using namespace std;

long long removeZeros(long long n) {
    long long res = 0, p = 1;
    while (n > 0) {
        if (n % 10 != 0) {
            res += (n % 10) * p;
            p *= 10;
        }
        n /= 10;
    }
    return res;
}

int main() {
    long long a, b;
    cin >> a >> b;
    long long c = a + b;
    if (removeZeros(a) + removeZeros(b) == removeZeros(c)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
