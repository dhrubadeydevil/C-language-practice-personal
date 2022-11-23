#include <stdio.h>
int main()
{
    int T,H,X,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d",&X,&H);
        if(X>=H)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
