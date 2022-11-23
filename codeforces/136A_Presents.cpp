#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, p[1000],a;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a;
		p[a]=i;
	}
	for(int i = 1; i<=n;i++){
		cout << p[i]<<" ";
	}
	
	
	return 0;
}
