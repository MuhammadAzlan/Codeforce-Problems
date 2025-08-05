#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	int count=0;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		string b="codeforces";
		for(int i=0;i<a.length();i++){
			if(a[i] != b[i]){
				count++;
			}
		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}