#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[5][5],val,val1;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				 val=i;
				 val1=j;
				
			}
		}
	}
	int moves = abs(val- 2) + abs(val1 - 2);
    cout << moves << endl;

	
	return 0;
}