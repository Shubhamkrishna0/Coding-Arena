//https://codeforces.com/problemset/problem/1969/B


#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int64_t count=0;
int64_t t=0;
for(int i=0;i<s.size();i++){
if(s[i]=='1')  t++;
else if(t>0)  count+=t+1;
}
cout<<count<<endl;
}
}