#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a,b;
	cin >> t;
	while(t--){
		cin >> n >> a >> b;
		if(a==b&&b==n&&a==n) cout << "Yes\n";
		else if(a+b+2<=n) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}