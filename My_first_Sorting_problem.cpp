#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x, y;
    while(t--) {
        cin>>x>>y;
    cout<<min(x,y)<<" "<<max(x,y)<<endl;
    }
    
 return 0;
}