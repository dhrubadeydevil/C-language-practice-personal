#include <bits/stdc++.h>
using namespace std;
int cnt[2];
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
    string s;
    cin >> s;
    int sz = s.size();
    for(int i=0;i<sz;i++){
        int x = (int) (s[i]-'a');
        cnt[x]++;
    }
    if(cnt[0]==cnt[1])
    	cout <<"YES\n";
    else 
    	cout <<"NO\n";
    }
}
  