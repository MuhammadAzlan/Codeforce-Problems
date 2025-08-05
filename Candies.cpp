#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	long a;
	for(int i=0;i<n;i++){
		
		cin>>a;
		if(a<2){
			cout<<0<<endl;
		}else{
			long num=(a-1)/2;
			cout<<num<<endl;
		}
	}
	return 0;
}