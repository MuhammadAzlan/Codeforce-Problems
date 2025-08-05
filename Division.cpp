#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> num;
	for(int i=0;i<n;i++){
		int nums;
		cin>>nums;
		num.push_back(nums);
		if(num[i]>=1900){
			cout<<"Division 1"<<endl;
		}else if(num[i]>=1600 && num[i]<=1899){
			cout<<"Division 2"<<endl;
		}else if(num[i]>=1400 && num[i]<=1599){
			cout<<"Division 3"<<endl;
		}else if(num[i]<=1399){
			cout<<"Division 4"<<endl;
		}
		
	}
	return 0;
}