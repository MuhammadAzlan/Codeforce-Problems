#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
	    string j;
	    cin>>j;
	    if(j.find("++") !=-1){
	      count++;
	    }else{
	    	count--;
	    }
	}
	cout<<count;
}