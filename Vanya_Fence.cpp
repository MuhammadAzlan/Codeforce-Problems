#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,h,t=0;
	cin>>n>>h;
	for(int i=0;i<n;i++){
		int height;
		cin>>height;
		if(height>h){
			t+=2;
		}else{
			t+=1;
		}
		
	}
	cout<<t;
	return 0;
	
}