#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	
	string reversedS;
	for(int i=s.length()-1;i>=0;i--){
		reversedS += s[i];
	}
	cout<<reversedS <<endl;
	return 0;
}

