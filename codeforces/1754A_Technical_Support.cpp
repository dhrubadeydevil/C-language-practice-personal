#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    char a[100];
    cin >> t;
    while(t--){
        cin >> n;
        int count=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]=='Q')
                count++;
            if(a[i]=='A')
                count--;
            if(count<0)
                count=0;

        }

        if(count==0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
