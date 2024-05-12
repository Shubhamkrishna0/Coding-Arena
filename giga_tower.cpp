#include <iostream>
#include <cmath>

bool isLucky(int n) {
    n = abs(n);
    while (n) {
        if (n % 10 == 8)
            return true;
        n /= 10;
    }
    return false;
}

int main() {
    int a;
    std::cin >> a;
    int b = 1;
    while (!isLucky(a + b))
        b++;
    std::cout << b;
    return 0;
}
