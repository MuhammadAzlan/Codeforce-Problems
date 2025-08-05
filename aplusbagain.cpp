#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		int t_d=a/10;
		int u_d=a%10;
		cout<<t_d+u_d<<endl;
	}
	return 0;
}