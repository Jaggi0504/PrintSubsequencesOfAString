#include<bits/stdc++.h>
using namespace std;

void print_Subs(string input, string output) {
	if(input.size() == 0) {
		cout<<output<<endl;
		return ;
	}
	print_Subs(input.substr(1), output);
	print_Subs(input.substr(1), output + input[0]);
}

int main() {
	string input;
	cin>>input;
	string output = "";
	print_Subs(input, output);
	return 0;
}
