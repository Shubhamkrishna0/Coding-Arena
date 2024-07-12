#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;while(t--)
{
	int n,x,ct=0;cin>>n;int a[101]={0};
for(int i=0;i<n;i++){
	cin>>x;a[x]++; 
}
for(int i=1;i<101;i++)
{
	if (a[i]>=3) ct+=(a[i]/3);
}
cout<<ct<<endl;
}
}