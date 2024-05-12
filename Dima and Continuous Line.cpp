

//vector pair iostream



// #include <stdio.h>
// #include <algorithm>
// 
// using namespace std;
// 
// int main() {
	// int a[3001], n;
	// scanf("%d", &n);
// 
	// for(int i = 0; i < n; ++i) {
		// scanf("%d", &a[i]);
	// }
// 
	// if(n <= 2) {
		// puts("no");
		// return 0;
	// }
// 
	// for(int i = 0; i < n - 1; ++i) {
		// for(int j = 0; j < n - 1; ++j) {
			// if((min(a[i], a[i+1]) < min(a[j], a[j+1]) && min(a[j],
			 // a[j+1]) < max(a[i], a[i+1]) 
			 // && max(a[i], a[i+1]) < max(a[j], a[j+1])) ||
// 			 
// 			 
			   // (min(a[j], a[j+1]) < min(a[i], a[i+1])
			    // && min(a[i], a[i+1]) < max(a[j], a[j+1]) 
			    // && max(a[j], a[j+1]) < max(a[i], a[i+1]))) {
				// puts("yes");
				// return 0;
			// }
		// }
	// }
// 
	// puts("no");
// 
	// return 0;
// }

#include "bits/stdc++.h"
using namespace std;
 
void solve(){
    int n, x, prev;
    vector <pair<int, int>> cir;
 
    cin >> n >> prev;
 
    for (int i = 1;i < n;i++){
        cin >> x;
        cir.push_back(make_pair(min(prev, x), max(prev, x)));
        prev = x;
    }
 
    sort(cir.begin(), cir.end());
 
    for (int i = 0;i< n-1;i++){
        int r = cir[i].second, j = i+1;
        while(cir[j].first < r && j < n-1){
            if (cir[j].second > r && cir[j].first > cir[i].first){
                cout << "yes\n";
                return;
            }
            j++;
        }
    }
    cout << "no\n";
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

/*

for (int i = 0; i < n - 1; i++){
For the given input, n is 4, so the loop runs from i = 0 to i = 2. 
We will iterate over the intervals 0-10, 5-10, and 5-15.
cpp
Copy code
    int r = cir[i].second, j = i + 1;
For the first iteration (i = 0), r is initialized to 10 
(the end point of the interval 0-10), and j is set to 1.
cpp
Copy code
    while (cir[j].first < r && j < n - 1){
The loop starts. For the first iteration, cir[j].first is
 5 (the start point of the next interval), which is less than r (10), 
 so we enter the loop.
cpp
Copy code
        if (cir[j].second > r && cir[j].first > cir[i].first){
Inside the loop, we check if the end point of the next 
interval (cir[j].second), which is 10, is greater than r (10).
 It's not, so we skip the condition check and continue with the loop.
cpp
Copy code
        j++;
    }
}
cout << "no\n";
*/