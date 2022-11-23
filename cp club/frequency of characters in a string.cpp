/*frequency of characters in a string*/
#include <bits/stdc++.h>
using namespace std;
int cnt[26];
int main(){
    string s;
    cin >> s;
    int sz = s.size();
    for(int i=0;i<sz;i++){
        int x = (int) (s[i]-'a');
        cnt[x]++;
    }
    for(int i=0;i<26;i++){
        if(cnt[i]>0)
            cout << (char)(i+97) << " " << cnt[i] <<endl;
    }
    for(int i=0;i<26;i++){
        if(cnt[i]>0){
            int y=cnt[i];
            for(int j=0;j<y;j++)
                cout << (char)(i+97);
        }
    }
    return 0;
}