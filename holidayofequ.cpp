#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,num=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=*max_element(a.begin(),a.end());
	for(int i=0;i<n;i++){
			num += abs(max-a[i]);
		   
	}
	cout<<num;
	
	return 0;
}