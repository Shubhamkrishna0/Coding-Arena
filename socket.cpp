//https://codeforces.com/problemset/problem/257/A

#include <bits/stdc++.h>
using namespace std;
int i, n , a[50], x, y ;
int main () {
	cin >> n >> x >> y ;
	for(i =0;i < n ; i++)
	cin >> a[i];
	
	sort (a, a+n , greater<int>());
	i=0;
	while(y<x && i < n)
	y+=a[i++]-1 ;
	if(y < x) 
	cout <<-1 ;
	else cout << i;
	return 0 ;
}

/*
sort(a, a+n, greater<int>());: It sorts the array a[] in non-increasing order.
i = 0;: Initializes a variable i to 0.
while(y < x && i < n): Enters a loop as long as y is less than x and i is less than n.
y += a[i++] - 1;: In each iteration of the loop, it adds a[i] - 1 to y and increments i.
if(y < x) cout <<-1;: Checks if y is less than x. If true, it means x cannot be achieved, so -1 is outputted.
else cout << i;: If y is greater than or equal to x, it outputs the value of i, representing the minimum number of elements needed to add to y to make it greater than or equal to x.
return 0;: Indicates successful completion of the program.
Now, let's take an example with input 4 7 2 and array 3 3 2 4:

n = 4, x = 7, and y = 2.
Sorted array: {4, 3, 3, 2}.
In the loop:
y += a[0] - 1 => y += 4 - 1 => y = 5.
y += a[1] - 1 => y += 3 - 1 => y = 7.
Since y >= x now, the loop exits.
i is 2, so the output will be 2, indicating that 2 elements were needed to make y >= x.*/