#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,s,a=0,j;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> s;
		int ar[9];
		for(j=0,i=9;i>=1;i--){
			a=s-i;
			if(a>0){
				ar[j]=i;
				j++;
				s=a;
			}

		}
		///int x=sizeof(ar)/sizeof(ar[0]);
		for(int i=j;i>=0;i--)
			cout << ar[i];
		cout << endl
	}
	return 0;
}