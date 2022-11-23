#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		int len = s.size();
		if(len<=10) cout << s << "\n";
		else{
			cout <<s[0]<<(len-2)<<s[len-1]<<"\n";
		}
	}
	return 0;
}