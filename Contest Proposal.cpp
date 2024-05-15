#include <iostream>
using namespace std;
int t,n,a[101],b[101];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)cin>>b[i];
		int j=0,i=0;
		while(n--){
			if(a[i]>b[j])j++;
			
			else i++,j++;
		}
		cout<<j-i<<'\n';	}
}

/*
Identify Problems:

For each test case, compare the arrays 
𝑎
a and 
𝑏
b. If 
𝑎
[
𝑖
]
≤
𝑏
[
𝑖
]
a[i]≤b[i] for all 
𝑖
i, no new problems are needed.
Otherwise, count how many positions 
𝑖
i have 
𝑎
[
𝑖
]
>
𝑏
[
𝑖
]
a[i]>b[i]. Let's denote this count as 
count
count.
Replace Problems:

For each problem that is too difficult (i.e., 
𝑎
[
𝑖
]
>
𝑏
[
𝑖
]
a[i]>b[i]), propose a new problem with difficulty 
𝑤
w such that 
𝑤
≤
𝑏
[
𝑖
]
w≤b[i].
Since we always propose the smallest possible 
𝑤
w, it guarantees that the array remains sorted after replacing the most difficult problem.
Simulate Replacement:

Insert the new problem into 
𝑎
a and remove the most difficult one. Repeat this process until 
𝑎
a satisfies the condition 
𝑎
[
𝑖
]
≤
𝑏
[
𝑖
]
a[i]≤b[i].

explain ex 1
Input:
Number of test cases (t): 1
Number of elements in each array (n): 6
Array a: [1000, 1400, 2000, 2000, 2200, 2700]
Array b: [800, 1200, 1500, 1800, 2200, 3000]
Code Execution:
Initialization:
t = 1
Arrays a and b are populated as above.
The main loop starts for t = 1.
First Test Case:
n = 6
Initialize i = 0, j = 0.
Loop Iterations:
First iteration (n = 6):

Compare a[i] and b[j]: a[0] = 1000, b[0] = 800
Since a[0] > b[0], increment j.
i = 0, j = 1
Second iteration (n = 5):

Compare a[i] and b[j]: a[0] = 1000, b[1] = 1200
Since a[0] <= b[1], increment both i and j.
i = 1, j = 2
Third iteration (n = 4):

Compare a[i] and b[j]: a[1] = 1400, b[2] = 1500
Since a[1] <= b[2], increment both i and j.
i = 2, j = 3
Fourth iteration (n = 3):

Compare a[i] and b[j]: a[2] = 2000, b[3] = 1800
Since a[2] > b[3], increment j.
i = 2, j = 4
Fifth iteration (n = 2):

Compare a[i] and b[j]: a[2] = 2000, b[4] = 2200
Since a[2] <= b[4], increment both i and j.
i = 3, j = 5
Sixth iteration (n = 1):

Compare a[i] and b[j]: a[3] = 2000, b[5] = 3000
Since a[3] <= b[5], increment both i and j.
i = 4, j = 6
End of Loop:
n is now 0, so the loop exits.
Calculate j - i: j = 6, i = 4, hence j - i = 2.
Output:
The result for this test case is 2.
*/