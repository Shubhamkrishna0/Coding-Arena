#include<bits/stdc++.h>
using namespace std;

main()
{ int t;
  cin>>t;
  while(t--)
  { string s,h;
    cin>>s;
    h=s;
    next_permutation(h.begin(),h.end());
    if(h!=s)
     cout<<"YES\n"<<h<<endl;
    else
     cout<<"NO"<<endl;
  }
}