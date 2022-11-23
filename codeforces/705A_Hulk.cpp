#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s1 = "I hate that ";
	string s2 = "I love that ";
	string s3 = "that";
	string s4 = "it";

	for(int i=1;i<=n;i++){
		if(i==n&&i%2!=0) s1.replace(7,4,"it");
		else if(i==n&&i%2==0) s2.replace(7,4,"it");

		if(i%2!=0) cout << s1;
		else cout << s2;

	}
	cout << "\n";
	return 0;
}