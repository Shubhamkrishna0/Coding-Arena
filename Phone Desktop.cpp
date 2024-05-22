//https://codeforces.com/contest/1974/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iomanip>
#include <cassert>
#include <sstream>
#include <numeric>
#include <cstdio>
#include <bitset>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

#define pb push_back
#define F first
#define S second
#define _sz(x) ((int)x.size())

const int N = 2e5 + 20, LG = 31;

int t;
int n;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> t;
    while(t--) {
        int x, y;
        cin >> y >> x;

        int ans = x / 2;

        x = max(0LL, x - 2LL * ans);
        /*
        
        Calculate Remaining 2x2 Icons:

x - 2LL * ans calculates the remaining number of 
2x2 icons after placing as many as possible on the screens.
Each screen can fit up to 2 pairs (4 units) of 2x2 
icons (2 * ans).
Ensure Non-negative Value:

max(0LL, ...) ensures that x does not become
 negative. If x - 2LL * ans is negative, it
  sets x to 0. This is crucial because the number
   of icons cannot be negative.
   
   */
        y = max(0LL, y - 7LL * ans);

        if (x) {
            x = 0;//skip at x = 0 below line
            y = max(0LL, y - 11LL);
        
            /*If there are any remaining 2x2 icons (x),
             they need a new screen. This new screen 
             might place one 2x2 icon and then use the
              remaining space for up to 11 1x1 icons.
              */
            
            ans++;
        }
        ans += (y + 14) / 15;
        /*
        Any remaining y (1x1 icons) is divided by 15 to
         calculate the number of additional screens needed
          (each screen can hold 15 1x1 icons).
           Adding 14 before dividing by 15 effectively 
           performs a ceiling division to ensure we round
            up when there is any remainder.
            Purpose
This line is used to determine the number of additional screens required to accommodate any remaining 1x1 icons (y). After optimally placing the 2x2 icons and utilizing any remaining spaces on those screens for 1x1 icons, there might still be some 1x1 icons left that need to be placed. This line calculates the minimum number of additional screens needed for these remaining 1x1 icons.

Mathematics Behind the Calculation
Screen Capacity
Each screen is a 5x3 grid, providing 15 cells in total. Therefore, one screen can hold up to 15 1x1 icons.

Ceiling Division
The expression (y + 14) / 15 is a way to perform ceiling division, which means rounding up to the next whole number if there is any remainder when y is divided by 15.

Why Add 14?

The addition of 14 ensures the correct rounding behavior:

When y is perfectly divisible by 15: The addition of 14 does not affect the result because the division will yield a whole number. For example, if y = 15, then (15 + 14) / 15 = 29 / 15 = 1 screen, which is correct because 15 1x1 icons fit exactly into one screen.

When y is not perfectly divisible by 15: The addition of 14 ensures that any remainder results in the division rounding up to the next whole number. For example, if y = 16, then (16 + 14) / 15 = 30 / 15 = 2 screens, which is correct because 16 1x1 icons need two screens (one full screen with 15 icons and one additional icon on the second screen).

Mathematical Reasoning:

If y is a multiple of 15:

Suppose y = 15 * k for some integer k.
Then, (y + 14) / 15 = (15k + 14) / 15 = k.
This is correct because k screens are needed to fit 15 * k icons.
If y is not a multiple of 15:

Suppose y = 15 * k + r, where 0 < r < 15 (i.e., r is the remainder when y is divided by 15).
Then, (y + 14) / 15 = (15k + r + 14) / 15 = (15k + (r + 14)) / 15.
Since 0 < r < 15, 0 < r + 14 < 29.
Therefore, 15k + (r + 14) is between 15k and 15k + 29.
The division by 15 will round up because r + 14 will make the numerator greater than a multiple of 15 unless r is zero.
Thus, (y + 14) / 15 = k + 1, which correctly accounts for the need of an additional screen if there are any remaining icons after filling k screens.
        */
        cout << ans << '\n';
    }

    return 0;
}
