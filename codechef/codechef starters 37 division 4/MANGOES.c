#include <stdio.h>
int main()
{
    int X,Y,Z,T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d %d",&X,&Y,&Z);
        int a=1;
        while((a*X+Y)<=Z)
            a++;
        printf("%d\n",a-1);
    }
    return 0;
}
