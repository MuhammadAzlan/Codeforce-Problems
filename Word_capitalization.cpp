#include <bits/stdc++.h>
using namespace std;
int main(){
	string word;
	cin>>word;
	if (!word.empty()) {
        word[0] = toupper(word[0]);
    }

    // Output the capitalized word
    cout << word <<endl;
}