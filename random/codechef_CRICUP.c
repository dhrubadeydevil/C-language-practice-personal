#include <stdio.h>
#include <math.h>
int main()
{
    int T,X,Y,D,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d %d",&X,&Y,&D);
        if(abs(X-Y)<D)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
