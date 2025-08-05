#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int num[]={3,2,4};
	int target=6;
	 int n = sizeof(num) / sizeof(num[0]);
	for(int i=0;i< n;i++){
		for(int j=0;j< n;j++){
		   if(num[i]+num[j]==target){
			cout<<i<<" "<<j<<endl;
			break;
		    }
	    }
   }
	return 0;
	
	
}