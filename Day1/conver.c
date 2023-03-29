#include<stdio.h>
void main()
{
    char ar[10];
    int a[10],b[10], n, s=0, f=0;
    printf("enter the limit\n");
    scanf("%d", &n);
    printf("enter the array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=n-1,j=0; i>=0,j<n; i--,j++)
    {
        b[j]=a[i];
        printf("%d\t", b[j]);
        
    }
    printf("\n");
    //ar[n]='\0';
    for(int i=0; i<n; i++)
    {
       if(b[i]!= 0)
       {
       ar[i]= b[i];
       }
       else
       {
        ar[i]='#';
       }
       printf("%c\t", ar[i]);
    }
}