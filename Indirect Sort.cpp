
#include<bits/stdc++.h>
int t;
main(){
std::cin>>t;
while(t--){
	int n;
	std::cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	std::cin>>a[i];
	puts(a[0]==1?"YES":"NO");
	}
	}
/*
a[0]==1 is a condition that checks if the first element of the array a[] is equal to 1.
"YES" and "NO" are two strings.
The ? and : symbols form the ternary operator in C++. It’s a shorthand for an if-else statement. The syntax is condition ? value_if_true : value_if_false.
So, a[0]==1?"YES":"NO" means “if the first element of the array a[] is 1, then return "YES", else return "NO"”.
puts() is a function that outputs a string to the console.
So, in summary, this line of code checks if the first element of the array a[] is 1. If it is, it prints "YES" to the console. If it’s not, it prints "NO". This check is performed for each test case t.
*/