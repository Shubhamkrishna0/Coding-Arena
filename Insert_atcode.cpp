#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	int n,k,x;
	cin >>n>>k>>x;
	
	vector<int> arr(n);
	for(int i = 0;i<n;++i){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;++i){
		cout<< arr[i]<<" ";
		if(i==k-1){
			cout<< x << " ";
		}
	}
	cout<< endl;
	
	
	return 0 ;
	
}