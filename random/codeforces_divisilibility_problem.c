/*
#include <stdio.h>
int main()
{
    long long int t,a,b,c,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
            for(c=0;a%b!=0;c++){
                a+=1;
            }
            printf("%d\n",c);
        }
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        if(a%b==0)
            printf("0\n");
        else{
            printf("%d\n",b-(a%b));
        }
    }
    return 0;
}
