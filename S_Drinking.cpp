#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int s=k*l;
	int a=s/n;
	int b=c*d;
	int r=p/np;
	cout<<max(a,b,r)/n;
	return 0;
	
}