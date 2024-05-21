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

/*
Initialize count = 0 and t = 0.
Loop through each character:
i = 0: s[0] == '1' -> t = 1
i = 1: s[1] == '1' -> t = 2
i = 2: s[2] == '0' -> count += 2 + 1 -> count = 3
i = 3: s[3] == '0' -> count += 2 + 1 -> count = 6
i = 4: s[4] == '0' -> count += 2 + 1 -> count = 9
Output the Result:

Print count, which is 9.





Processing the String "01101001":
Initialize count = 0 and t = 0.
Loop through each character:
i = 0: s[0] == '0'
t remains 0, so count remains 0.
i = 1: s[1] == '1'
t = 1 (incremented because of '1').
i = 2: s[2] == '1'
t = 2 (incremented again because of '1').
i = 3: s[3] == '0'
Since t > 0, count += t + 1 -> count = 2 + 1 = 3.
i = 4: s[4] == '1'
t = 3 (incremented because of '1').
i = 5: s[5] == '0'
Since t > 0, count += t + 1 -> count = 3 + 1 + 3 = 7.
i = 6: s[6] == '0'
Since t > 0, count += t + 1 -> count = 3 + 1 + 7  = 11.
i = 7: s[7] == '1'
t = 4 (incremented because of '1').
Output the Result:

Print count, which is 11.

*/