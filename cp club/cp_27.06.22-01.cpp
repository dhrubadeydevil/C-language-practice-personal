/// divide 10^50 with any int x
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





/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num1;
    int x,p=0;
    cin >> num1 >> x;
    int len1 = num1.size();
    for(int i=0;i<len1;i++){
        int k=num1[i]-'0';
        p*=10;
        p+=k;
        p%=x;
    }
    if(p==0)
        cout << "Divisible" << endl;
    else
        cout << "Not Divisible" << endl;
    cout<< p << endl;
    return 0;
}*/
