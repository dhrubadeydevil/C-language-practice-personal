///B1- wonderful coloring 1

#include <bits/stdc++.h>
using namespace std;
int arr[26];
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int sz = s.size();
        for(int i=0;i<sz;i++){
            arr[s[i]-'a']++;
        }
        int cnt1 = 0,cnt2=0;
        for(int i=0;i<26;i++){
            if(arr[i]>1) cnt1++;
            else if(arr[i]==1) cnt2++;
        }
        cout << cnt1 + (cnt2>>1) << endl;
        memset(arr, 0, sizeof(arr));
    }
    return 0;
}
