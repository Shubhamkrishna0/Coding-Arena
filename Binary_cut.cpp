//https://codeforces.com/problemset/problem/1971/D




#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>s;
		int k=1;
		for(int i=1;i<s.size();i++)
			if(s[i]!=s[i-1])k++;
		if(k==1)cout<<1<<endl;
		else if(k==2)cout<<1+(s[0]=='1')<<endl;
		/*
		Case k == 2: If k is 2, it means there are exactly two 
		segments with different characters. The result is 1 plus
		 1 if the first character is '1' (s[0] == '1'), otherwise 
		 just 1. This accounts for the special case when the string starts with '1'.
		*/
		else cout<<k-1<<endl;
	}
	return 0;
}
/*
Reading Input:


cin >> s;
For this test case, s = "0001111".
Counting Segments:

int k = 1;
for(int i = 1; i < s.size(); i++)
    if(s[i] != s[i-1]) k++;
Initialize k = 1 to start counting segments.
Loop through the string starting from the second character (index 1):
Compare s[1] with s[0] ('0' with '0'): they are the same, so k remains 1.
Compare s[2] with s[1] ('0' with '0'): they are the same, so k remains 1.
Compare s[3] with s[2] ('1' with '0'): they are different, so k is incremented to 2.
Compare s[4] with s[3] ('1' with '1'): they are the same, so k remains 2.
Compare s[5] with s[4] ('1' with '1'): they are the same, so k remains 2.
Compare s[6] with s[5] ('1' with '1'): they are the same, so k remains 2.
After the loop, k = 2 because there are two segments: "000" and "1111".
Output the Result:


if(k == 1) cout << 1 << endl;
else if(k == 2) cout << 1 + (s[0] == '1') << endl;
else cout << k - 1 << endl;
Check the value of k:
k is not 1, so skip the first condition.
k is 2, so evaluate the second condition:



cout << 1 + (s[0] == '1') << endl;
s[0] is '0', so (s[0] == '1') evaluates to false (0).
The output will be 1 + 0 = 1.

return 0;
The program ends, and the final output is 1.
*/