#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,k=0;
    cin >> s >> n;
    int x=s.size();
    for(int i=0;i<x;i++){
        int p=s[i]-'0';
        k*=10;
        k+=p;
        k%=n;
    }
    if(k==0)
        cout<<"Divisible"<<endl;
    else cout<<"Not Divisible"<<endl;
    return 0;
}