#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
	
		if(a == b){
			cout<<0<<endl;
			continue;
		}
			vector<int> num;
		  for(int i=a;i<b;i++){
			int d=(i-a)+(b-i);
			num.push_back(d);
		  }
		
		int min=*min_element(num.begin(),num.end());
		cout<<min<<endl;
	}
	return 0;
}