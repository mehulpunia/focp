#include<stdio.h>
int main()
{
    int a[5][5]={11,22,33,44,55,66,77,88,99,43,42,65,13,87,32,78,32,76,34,65,54,57,13,57,24},r,c,sum=0;
    for(r=0;r<5;r++)
    {   printf("\n");
        for(c=0;c<5;c++)
        {
            printf(" %d",a[r][c]);
        }

    }
 for(r=0;r<5;r++)
    {   printf("\n");
        for(c=0;c<r;c++)
        {
            printf("%d\t",a[r][c]);
            sum+=a[r][c];
        }

    }
    printf("\nsum lower triangular:%d",sum);
    




}
