#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	float val,num=0.0;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		 val=a/100.0;
		 num=num+val;
	}
	
		cout<<(num/n)*100;
	return 0;
}