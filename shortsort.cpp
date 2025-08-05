#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string c;
		cin>>c;
		if(c == "abc"){
			cout<<"YES"<<endl;
			continue;
		}
		string temp=c;
		
		swap(temp[0],temp[1]);
		if(temp == "abc"){
			cout<<"YES"<<endl;
			continue;
		}
		temp = c;
        swap(temp[0], temp[2]);
        if (temp == "abc") {
            cout << "YES" << endl;
            continue;
        }
        temp = c;
        swap(temp[1], temp[2]);
        if (temp == "abc") {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
		
	}
	return 0;
}