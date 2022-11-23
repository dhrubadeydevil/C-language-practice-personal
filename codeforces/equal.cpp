#include <iostream>
#include <string>
using namespace std;
int main(){
	
	string s;
	cin >> s;
	long long int n=stoll(s);
	long long int len = s.size();
	for(int i=0;i<len;i++){
		s[i]=s[0];
	}
	long long int a=stoll(s); 
	if(a>=n)
		cout << a;
	else{
		long long int d = (long long int)s[0]+1;
		for(int i=0;i<len;i++){
			s[i]=d;
		}
		a=stoll(s);
		cout << s;
	}
	
	return 0;
}