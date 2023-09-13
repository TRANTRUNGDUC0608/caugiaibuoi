//bai2...
#include <bits/stdc++.h>

using namespace std;
int main(){
int a[4][2];
for(int i=0;i<4;i++){
for(int j=0;j<2;j++){
   cin>>a[i][j];
  }
 }
if(a[1][0] != a[0][0] && a[3][0] != a[2][0])
 {
 	double m =(double)(a[1][1]-a[0][1])/(a[1][0]-a[0][0]);
 	double n =(double)(a[3][1]-a[2][1])/(a[3][0]-a[2][0]);
 	double e=(double) a[1][1]-a[1][0]*m ;
 	double f=(double) a[3][1]-a[3][0]*n ;
 	if(m==n){
  		if(e==f) cout<<"MANY";
  		else cout<<"NO";
 	}
 	else{
  		double x=(double) (f-e)/(m-n);
 		double y=(double) m*x +e;
  		cout<<x<<" "<<y;
	}
 }
else if(a[1][0] == a[0][0] && a[3][0] == a[2][0])
{
 	if(a[1][0] == a[3][0]) cout<<"MANY";
 	else cout<<"NO";
}
else if(a[1][0] == a[0][0] && a[3][0] != a[2][0])
{
	double n =(double)(a[3][1]-a[2][1])/(a[3][0]-a[2][0]);
	double f=(double) a[3][1]-a[3][0]*n ;
	double x=(double) a[1][0];
	double y=(double) x*n + f;
	cout<<x<<" "<<y;
}
else if(a[1][0] != a[0][0] && a[3][0] == a[2][0])
{
	double m =(double)(a[1][1]-a[0][1])/(a[1][0]-a[0][0]);
	double e=(double) a[1][1]-a[1][0]*m ;
	double x=(double) a[3][0];
	double y=(double) x*m + e;
	cout<<x<<" "<<y;
}
return 0;
}
