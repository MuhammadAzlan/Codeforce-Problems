#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> a(3);
		for(int i=0;i<3;i++){
			cin>>a[i];
		}
		if(a[0] == a[1]){
			cout<<a[2]<<endl;
		}else if(a[1]==a[2]){
			cout<<a[0]<<endl;
		}else{
			cout<<a[1]<<endl;
		}
	}
	return 0;
}