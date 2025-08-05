#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int k=1;
	if(n%2==0){
		cout<<4<<" "<<n-4<<endl;
	}else{
		cout<<9<<" "<<n-9<<endl;
	}
	return 0;
}