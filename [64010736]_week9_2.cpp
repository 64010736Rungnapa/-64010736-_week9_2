#include<stdio.h>
int main()
{
    int square;
    int i, j;
     
    printf("Enter square size : ");
    scanf("%d", &square);
     
    for(i = 0; i < square; i++)
    {
        for(j = 0; j < square; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
