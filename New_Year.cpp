#include <iostream>   
#include <vector>     
#include <tuple> 
using namespace std;

int main(){
	int n,t,k,s=0,l=0,j,h;
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		k=i*5;
		s+=k;
		j=t+s;
	    h=240-j;
	    if(h>=0){
		  l+=1;
	    }
	}
	cout<<l;
	return 0;
}