#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k,count=0;
	cin>>n>>k;
	vector<int> num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for(int i=0;i<n;i++){
		if(5-num[i] >=k){
			count++;
		}
	}
	cout<<count/3<<endl;
	return 0;
}