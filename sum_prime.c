#include<stdio.h>
void main()
{
    int a[20],n,sum=0,flag=0;
    printf("Enter the array size: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter %d: ",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum is: %d \n",sum);
    for(int j=2;j<sum/2;j++)
    {
        if(j%sum==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Not prime.");
    else
        printf("Prime");
}
