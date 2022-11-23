#include <bits/stdc++.h>
using namespace std;
int sum[1000];
int main()
{
    sum[0]=0;
    for(int i=1;i<1000;i++){
        sum[i]+=i+sum[i-1];
    }
    int t,m,s,b[100],p=0;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> m >> s;
        p+=s;
        for(int j=0;j<m;j++){
            cin >> b[j];
            p+=b[j];
        }
        int index = find(sum,sum+(sizeof(sum)/sizeof(sum[0])),p)-sum;
        cout << index;
    }


    return 0;
}
