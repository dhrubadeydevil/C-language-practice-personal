#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define soja(i,a,n) for(ll i=a;i<=n;i++)
int main()
{
    ll n,m,k,t,sum=0,x,y,r,q;
    cin>>n;
    ll a[n];
    soja(i,0,n-1)
    cin>>a[i];
    ll dp[n+5];
    memset(dp,0,sizeof(dp));
    cin>>q;
    while(q--)
    {
      cin>>x>>y>>r;
      dp[x]+=r;
      dp[y+1]+=-r;

    }
    sum=0;
    soja(i,0,n-1)
    {
       dp[i]+=sum;
       sum=dp[i];
       cout<<dp[i]+a[i]<<" ";
    }
    cout<<endl;
}
/*
5
1 2 3 4 5
3
0 4 10
0 3 11
3 4 12





*/
