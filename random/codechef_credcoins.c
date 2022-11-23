#include <stdio.h>
int main()
{
    int T,X,Y,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d",&X,&Y);
        printf("%d\n",(X*Y)/100);
    }
    return 0;
}
