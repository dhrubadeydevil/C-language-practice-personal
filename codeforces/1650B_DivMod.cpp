#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,l,r,i,a,x;
	cin >> t;
	while(t--){
		long long int mark=0,temp=0;
		cin >> l >> r >> a;
    long long int ans = r / a + r % a;
    long long int m = r / a * a - 1;
    if(m >= l)ans = max(ans, m / a + m % a);
    cout << ans<<endl;

	}
	return 0;
}