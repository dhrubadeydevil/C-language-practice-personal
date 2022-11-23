#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,arr[200],cnt=0;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]>=arr[k-1]&&arr[i]>0) cnt++;
	}
	cout << cnt <<"\n";
	return 0;
}