#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,count=0;
	string b;
	cin>>a;
	cin>>b;
	for(int i=0;i<a;i++){
		if(b[i]==b[i+1]){
			count++;
		}
	}
	cout<<count;
	return 0;
}