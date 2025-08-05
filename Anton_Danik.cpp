#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0;
	string s;
	cin>>n;
	cin>>s;
	for(char ch:s){
		if(ch=='A'){
			count++;
		}
	}
	int count1=n-count;
	if(count1>count){
		cout<<"Danik";
	}else if(count1<count){
		 cout<<"Anton";
	}else{
		cout<<"Friendship";
	}
	return 0;
	
}