#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,x,s=501;
cin>>n;
cout<<s<<" ";
for(int i=0;i<n-1;i++){
cin>>x;
s+=x;
cout<<s<<" ";
}
cout<<endl;
}
}