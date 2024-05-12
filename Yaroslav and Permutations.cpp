#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    map<int, int> freq;
    for(int i=0; i<n; i++)
        freq[a[i]]++;

    int max_freq = 0;
    for(auto it: freq)
        max_freq = max(max_freq, it.second);

    if(max_freq > (n+1)/2)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
