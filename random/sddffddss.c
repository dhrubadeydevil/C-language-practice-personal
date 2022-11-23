#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(odd_digit(n)==0)
        printf("Odd digit positions= no odd digit available\n");
    else
        printf("Odd digit positions = %d\n",odd_digit(n));
    return 0;
}
int odd_digit(int x){
    int temp=x, count=0;
    while(temp !=0){
        int d = temp%10;
        temp/=10;
        if(d%2!=0)
            count+=d;

    }
    return count;
}
