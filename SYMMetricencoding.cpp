/*

https://codeforces.com/contest/1974/problem/B

Polycarp has a string 
𝑠
s which consists of lowercase Latin letters. He encodes this string using the following steps:

Construct an Auxiliary String 
𝑟
r: This string 
𝑟
r consists of all distinct letters of the string 
𝑠
s, arranged in alphabetical order.
Encoding the String 
𝑠
s: Each character in the string 
𝑠
s is replaced by its symmetric character in the string 
𝑟
r. The symmetry is defined such that:
The first character of 
𝑟
r is replaced by the last character of 
𝑟
r.
The second character of 
𝑟
r is replaced by the second last character of 
𝑟
r.
And so on.
For example, for 
𝑠
=
"
𝑐
𝑜
𝑑
𝑒
𝑓
𝑜
𝑟
𝑐
𝑒
𝑠
"
s="codeforces":

𝑟
r is "cdefors" (distinct letters in alphabetical order).
The encoding mapping is:
'c' -> 's'
'd' -> 'r'
'e' -> 'o'
'f' -> 'f'
'o' -> 'e'
'r' -> 'd'
's' -> 'c'
The encoded string 
𝑏
b for 
𝑠
=
"
𝑐
𝑜
𝑑
𝑒
𝑓
𝑜
𝑟
𝑐
𝑒
𝑠
"
s="codeforces" becomes "serofedsoc".

Task
Given the encoded string 
𝑏
b, your task is to decode it to get back the original string 
𝑠
s.

Input
The first line contains a single integer 
𝑡
t (number of test cases).
For each test case:
The first line contains a single integer 
𝑛
n (length of the string 
𝑏
b).
The second line contains the encoded string 
𝑏
b.
Output
For each test case, output the decoded original string 
𝑠
s.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int q ;
	cin >> q ;
	while(q--) {
		int n ;
		string s ;
		cin >> n >> s ;
		string t = s ;
		sort(t.begin(),t.end()),
		t.erase(unique(t.begin(), t.end()) , t.end());
		for(char a:s) 
		cout << t.end()[-(find(t.begin(), t.end(),a)-t.begin())-1];
		cout << endl;
		
	}
}
































