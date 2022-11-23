///longest common prefix

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s[10];
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    sort(s,s+n);
    cout << endl;
    for(int i=0;i<n;i++){
        cout << s[i] << endl;
    }
    return 0;
}
