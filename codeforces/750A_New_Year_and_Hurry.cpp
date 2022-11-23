#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,sum=0,p;
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		sum+=(5*i);
		if(sum+k<=240)
			p=i;
	}
	cout << p << endl;
	return 0;
}