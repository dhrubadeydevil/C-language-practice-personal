#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t=0,i;
	cin >> n;
	while(n--){
		cin>>i;
		if(i==1)
			t++;
	}
	(t>0)?cout<<"HARD\n":cout<<"EASY\n";
	return 0;
}