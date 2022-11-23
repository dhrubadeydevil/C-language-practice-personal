#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
	int n;
	cin >> n;
	stringstream ss;
	ss << n;
	string s;
	ss >> s;
	int len = s.size();
	///cout << s << " hello 1 " << len<<endl;
	for(int i=0;i<len;i++){
		s[i]=s[0];
	}
	///cout << s <<" sec "<< endl;
	///ss << s;
	int a=stoi(s); 
	///ss>>a;
	///cout << a <<"third" <<endl;
	if(a>=n)
		///cout << s;
		///cout << a << "foiu"<<endl;
		cout << a;
	else{
		ss <<a;
		ss >> s;
		int d = (int)s[0]+1;
		for(int i=0;i<len;i++){
			s[i]=d;
		}
		///cout << "fifth " << s;
		a=stoi(s);
		cout << s;
	}
	
	return 0;
}