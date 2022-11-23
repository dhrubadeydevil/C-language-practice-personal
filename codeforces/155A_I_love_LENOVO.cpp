#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, min, max, a, b, count=0;
    cin >> n >> a;
    min = a;
    max = a;
    for(int i=0;i<n-1;i++){
        cin >> b;
        if(b<min){
            min = b;
            count++;
        }
        if(b>max){
            max = b;
            count++;
        }
    }
    cout << count << "\n";
return 0;
}
