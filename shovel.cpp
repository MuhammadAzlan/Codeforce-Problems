#include <bits/stdc++.h>
using namespace std;

int main(){
	int k,r;
	cin>>k>>r;
	int n=1;
	while(true){
		int total=n*k;
		if(total % 10 == r || total % 10 == 0){
			cout<<n<<endl;
			break;
		}
		n++;
	}
	
	return 0;
}