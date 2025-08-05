#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,sum=0,dima=0;
	cin>>n;
	vector<int> num;
	for(int i=0;i<n;i++){
		int nums;
		cin>>nums;
		num.push_back(nums);
	}
	sort(num.begin(),num.end());
	bool turn=true;
	for(int i=n-1;i>=0;i--){
		  if(turn){
		  	sum+=num[i];
		  }else{
		  	dima+=num[i];
		  }
		  turn =! turn;
	    }
	cout<<sum<<" "<<dima;
	
	return 0;
}