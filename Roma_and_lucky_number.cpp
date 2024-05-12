#include<bits/stdc++.h>
using namespace std;

int countLuckyDigits(int n) {
    int count = 0;
    while(n) {
        int digit = n % 10;
        if(digit == 4 || digit == 7)
            count++;
        n /= 10;
    }
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    int count = 0;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if(countLuckyDigits(num) <= k)
            count++;
    }
    cout << count;
    return 0;
}
