#include <bits/stdc++.h>
using namespace std;
#define la long long int
int main(){
	int t;
	cin >> t;
	while(t--){
		la un[200009], sor[200009],n,a; 
		cin >> n;
		for(la i=0;i<n;i++){
			cin >> a;
			un[i]=a;
			sor[i]=a;
		}
		sort(sor,sor+n);
		la max1=sor[n-1];
		la max2=sor[n-2];
		for(la i=0;i<n;i++){
			if(un[i]==max1)
				un[i]-=max2;
			else un[i]-=max1;
			cout << un[i]<<" ";
		}
		cout << "\n";
	}
	return 0;
}