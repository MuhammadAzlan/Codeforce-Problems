#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string a;
	
	unordered_map<string, int> polyhedronfaces={
		{"Tetrahedron", 4},
		{"Cube", 6},
		{"Octahedron", 8},
		{"Dodecahedron", 12},
		{"Icosahedron", 20}
	};
	int totalfaces=0;
	for(int i=0;i<n;i++){
		cin>>a; 
		totalfaces +=polyhedronfaces[a];
	}
	cout<<totalfaces<<endl;
	return 0;
}