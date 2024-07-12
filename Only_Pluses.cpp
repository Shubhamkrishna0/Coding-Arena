#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        int increases = 5;
        while (increases > 0) {
            int smallest = pq.top();
            pq.pop();
            smallest++;
            pq.push(smallest);
            increases--;
        }
        
     
        a = pq.top(); pq.pop();
        b = pq.top(); pq.pop();
        c = pq.top();
        
        
        int result = a * b * c;
        
        cout << result << endl;
    }
    
    return 0;
}
