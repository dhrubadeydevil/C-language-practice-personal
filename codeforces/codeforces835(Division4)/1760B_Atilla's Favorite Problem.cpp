#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a[300];
	cin >> t;
	string s;
	while(t--){
		cin >> n >> s;
		for(int i=0;i<n;i++){
			a[i]=s[i] - 'a';
		}
		sort(a,a+n);
		cout << a[n-1] << "\n";
	}
	return 0;
}