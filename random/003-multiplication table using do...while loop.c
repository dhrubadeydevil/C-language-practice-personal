#include <stdio.h>
#define COLMAX 20
#define ROWMAX 100
main()
{
    int row,column, y;
    row = 1;
    printf("        MULTIPLICATION TABLE    \n");
    printf("------------------------------------------------------------------------\n");
    do{
        column=1;
        do{
            y=row*column;
            printf("%9d",y);
            column=column+1;
        }
        while(column <= COLMAX);
        printf("\n");
        row=row+1;
    }
    while(row <= ROWMAX);
    printf("----------------------------------------------------------------------------------------------------\n");
}
