//vector 


#include <iostream>
#include <vector>

int main() {
    int n, d;
    std::cin >> n >> d;
    std::vector<int> t(n);
    for(int i=0; i<n; i++)
        std::cin >> t[i];

    int total_time = 0;
    for(int i=0; i<n; i++)
        total_time += t[i];

    if(total_time + 10*(n-1) > d) {
        std::cout << -1 << std::endl;
    } else {
        int jokes = 2*(n-1);
        total_time += 10*(n-1);
        jokes += (d - total_time)/5;
        std::cout << jokes << std::endl;
    }

    return 0;
}
