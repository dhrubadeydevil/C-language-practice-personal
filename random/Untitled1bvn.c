#include<stdio.h>

int star_function(int n);

int main()
{
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    star_function(a);
    return 0;

}

int star_function(int n)

{
    int s, i, j;
    for(i = n; i >= 1; i--)
    {
        for(s = i; s < n; s++)
            printf("  ");
        for(j = 1; j <= (2 * i - 1); j++)
            printf("* ");
        printf("\n");
    }
}
