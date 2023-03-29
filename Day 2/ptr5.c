#include<stdio.h>
void main()
{
    int a, b;
    int *ptr1= &a, *ptr2= &b;
    printf("enter the value of a and b");
    scanf("%d %d", &a, &b);
    printf("ans is: %d", *ptr1 / *ptr2);
}