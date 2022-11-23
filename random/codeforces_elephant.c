#include <stdio.h>
int main()
{
    int x,step,s1,s2,s3,s4,s5,total_steps;
    scanf("%d",&x);
    step=x;
    s5=step/5;
    step%=5;
    s4=step/4;
    step%=4;
    s3=step/3;
    step%=3;
    s2=step/2;
    s1=step%2;
    total_steps=s1+s2+s3+s4+s5;
    printf("%d",total_steps);
    return 0;
}
