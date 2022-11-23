#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,a[10];
	cin >> t;
	while(t--){
		for(int i=0;i<3;i++)
			cin >> a[i];
		sort(a,a+3);
		cout << a[1] << "\n";
	}
	return 0;
}