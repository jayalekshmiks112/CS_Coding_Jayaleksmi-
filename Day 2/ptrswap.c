#include<stdio.h>
void main()
{
    int a, b, temp;
    int *ptr1= &a, *ptr2= &b;
    printf("enter the value of a and b");
    scanf("%d %d", &a, &b);
    printf("value before swapping using pointers: %d %d", *ptr1, *ptr2);
    temp= *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;
     printf("value after swapping using pointers: %d %d", *ptr1, *ptr2);
}