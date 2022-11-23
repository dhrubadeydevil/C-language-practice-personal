#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,t,cnt=0;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		if(a+b+c>=2) cnt++;
	}
	cout << cnt << "\n";
	return 0;
}