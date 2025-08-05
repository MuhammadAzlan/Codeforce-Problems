#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int max_=max(a,b);
	int c=(6-max_+1);
	int f=__gcd(c,6);
	cout<<c/f<<"/"<<6/f<<endl;
	return 0;
}