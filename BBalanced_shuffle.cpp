//https://codeforces.com/problemset/problem/1970/A1


#include<bits/stdc++.h>
using namespace std;
 
int main() {
     string s;
     int c=0;
     cin>>s;
 
    vector<pair<int, int>> vp;
 
 
     for(int i=0;i<s.size();i++)
     {vp.push_back({c,i*-1});
         if(s[i]=='(')c++;
         else c--;
     }
sort(vp.begin(),vp.end());
 
  for (auto u : vp) {
        cout << s[u.second* - 1];
    }
}
