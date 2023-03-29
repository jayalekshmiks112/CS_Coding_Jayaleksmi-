#include<stdio.h>
void main()
{
    int *num=(int *)calloc(20,sizeof(int));
    //int *num=(int *)malloc(20*sizeof(int));
    num[0]=1;
    num[1]=2;
    num[2]=3;
    printf("Int are :\n");
    for(int i=0;i<5;i++)
        printf("Num[%d]= %d\n",i,num[i]);
    printf("%p\n%p\n%p",num,num+1,num+2);
}
