#include <bits/stdc++.h>

using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	int min=999, max=-999;
	for(int i=0;i<5;i++){
		if(max <a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	cout<<max+min;
	return 0;
}
