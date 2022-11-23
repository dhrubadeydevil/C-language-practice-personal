#include <bits/stdc++.h>
using namespace std;

#define li long long int
int main(){
	li n,a[150],sum=0;
	cin >>n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	li max = *max_element(a,a+n);
	for(int i=0;i<n;i++){
		sum+=(max-a[i]);
	}
	cout << sum << "\n";
	return 0;
}