#include <iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	if(m >=1 && n>=1)
	 {
	int ucln=1;
	for(int i=2;i<m;i++){
		if(m%i==0 && n%i==0) {
			if( ucln <i) ucln =i;
		}
	}
	cout<<ucln;
}
	return 0;
}
