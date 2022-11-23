#include <stdio.h>
int main()
{
    int i,t,x,y,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&x);
        for(int j = 1; j <= x; j++) {
		if((x%j) == 0){
			printf("\n%d ", j);
			printf("\n");
        }
        }
    }
    return 0;
}
