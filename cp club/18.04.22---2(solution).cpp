#include <bits/stdc++.h>
using namespace std;
int arr[26];
int main(){
    int q;
    string t,p;
    cin >> t;
    cin >> p;
    int index=-1;
    int szt = t.size(), szp = p.size();
    for(int i=0; i<szt;i++){
        int cnt=0,q=0;
        for(int j=0;j<szp;j++){
            if(t[i+j]==p[j]){
                cnt++;
            }
            else break;
        }
        if(cnt==szp){
            index=i;
            q++;
            break;
        }
    }
    if(index==-1){
        cout << "Not found";}
    else cout << "Found at: " << index << endl;
    return 0;

}
