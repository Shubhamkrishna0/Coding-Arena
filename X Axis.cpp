	#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,a,b,c;
 cin>>t;
 while(t--)
 {
 cin>>a>>b>>c;
 cout<<max({a,b,c})-min({a,b,c})<<endl;
 }
}