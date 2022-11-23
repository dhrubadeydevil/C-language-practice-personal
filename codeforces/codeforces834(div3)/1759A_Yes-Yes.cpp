#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    string s;
    string test = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> s;
        int loc = test.find(s);
//        cout << "  "<< loc << "\n";
        if(loc>=0)
            cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

//int main()
//{
//    int t;
//    string s;
//}
