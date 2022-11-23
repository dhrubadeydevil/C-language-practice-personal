#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n,f=0,t;
	cin >>n;
	if(n%2==0){
		f=n/2;
	} else f=-1*((n/2)+1);
	cout << f << endl;
	return 0;
}