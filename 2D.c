
#include<stdio.h>
void main()
{
    int r,c,arr[20][20];
    printf("Enter row: ");
    scanf("%d",&r);
    printf("\nEnter col: ");
    scanf("%d",&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter %d row %d col: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nDiagonal elements: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
                printf("%d\t",arr[i][j]);
                else
                printf(" \t");
        }
        printf("\n");
    }
    printf("\nLower diagonal: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i>j)
            printf("%d\t",arr[i][j]);
            else
                printf(" \t");
        }
        printf("\n");
    }
    printf("\nUpper diagonal: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i<j)
            printf("%d\t",arr[i][j]);
            else
                printf(" \t");
        }
        printf("\n");
    }
    printf("\nNOn-diagonal elements: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i!=j)
            printf("%d\t",arr[i][j]);
            else
                printf(" \t");
        }
        printf("\n");
    }
}
