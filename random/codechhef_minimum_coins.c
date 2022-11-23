#include <stdio.h>
int main()
{
    int T,X,i,a10,b5,c;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&X);
        if(X%5!=0)
            printf("-1\n");
        else if(X%10==0){
            printf("%d\n",X/10);
        }
        else if(X%5==0){
            a10=X/10;
            b5=X%10;
            b5/=5;
            printf("%d\n",a10+b5);
        }
    }
    return 0;
}
