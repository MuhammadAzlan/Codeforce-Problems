#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> socks;
	for(int i=0;i<2;i++){
		int n;
		cin>>n;
		socks.push_back(n);
	}
	int a_min=*min_element(socks.begin(),socks.end());
	int b_max=*max_element(socks.begin(),socks.end());
	int b=b_max-a_min;
	if(b%2>=0){
		b=b/2;
		cout<<a_min<<" "<<b;

	}
	return 0;
}