///pattern matching
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string T,P; int i;
    cout <<  "Text: ";
    cin >> T;
    cout <<  "Pattern: ";
    cin >> P;
    int szT = T.size();
    int szP = P.size();
    for(int i=0;i<szT;i++){
        for(int j=0;j<szP;j++){
            if(T[i]==P[j])
                break;
        }
    } cout << i;
    return 0;
}
