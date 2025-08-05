#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> n;
	for(int i=0;i<4;i++){
		int num;
		cin>>num;
		n.push_back(num);
	}
	int a,b,c;
	sort(n.begin(),n.end());
	a=n.back()-n[0];
	b=n.back()-n[1];
	c=n.back()-n[2];
	cout<<a<<" "<<b<<" "<<c;	
return 0;
}