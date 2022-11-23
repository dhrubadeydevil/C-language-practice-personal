#include <bits/stdc++.h>
using namespace std;
/*int main()
{
    int T,A,B,C,K;
    cin >> T;
    for(int i=1;i<=T;i++){
        cin >> A >>B >>C >> K;
        if((A==B)&&(A==C)&&(B==C))
            cout <<"Case "<<i<< ": Peaceful\n";
        else if((A+K==C)&&(B-K==C))
            cout <<"Case "<<i<< ": Peaceful\n";
        else if((A-K==C)&&(B+K==C))
            cout <<"Case "<<i<< ": Peaceful\n";
        else if((B+K==A)&&(C-K==A))
            cout <<"Case "<<i<< ": Peaceful\n";
        else if((B-K==A)&&(C+K==A))
            cout <<"Case "<<i<< ": Peaceful\n";
        else if((A+K==B)&&(C-K)==B)
            cout <<"Case "<<i<< ": Peaceful\n";
        else if((A-K==B)&&(C+K==B))
            cout <<"Case "<<i<< ": Peaceful\n";
        else
            cout <<"Case "<<i<< ": Fight\n";
    }
    return 0;
}*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,A,B,C,K;
    cin >> T;
    for(int i=1;i<=T;i++){
        cin >> A >>B >>C >> K;
        if((A%K==0) && (B%K==0) && (C%K==0))
            cout <<"Case "<<i<< ": Peaceful\n";
        else
            cout <<"Case "<<i<< ": Fight\n";

    }
    return 0;
}
