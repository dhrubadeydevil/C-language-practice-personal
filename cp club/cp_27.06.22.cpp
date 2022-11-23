///large number multiplication
/// even or odd
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num1,num2;
    cin >> num1 >> num2;
    int len1 = num1.size();
    int len2 = num2.size();
    int x1 = num1[len1-1]-48;
    int x2 = num2[len2-1]-48;
    ((x1*x2)%2==0)?cout << "Even" << endl: cout << "Odd" << endl;
    return 0;
}
