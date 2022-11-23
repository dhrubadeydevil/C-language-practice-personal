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
    int cnt=0;
    for(int i=0;i<s[0].size();i++){
        if(s[0][i]!=s[n-1][i]){
            break;
        }
        cnt++;
    }
    cout<< "Longest common prefix length = "<< cnt <<endl;
    cout<< "Longest common prefix = ";
    for(int i=0;i<cnt;i++)
    cout<< s[0][i];
    return 0;
}

