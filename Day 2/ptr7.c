#include<stdio.h>
void main()
{
    int a, b, temp;
    int *p1= &a, *p2= &b;
    printf("enter the value of a and b\n");
    scanf("%d %d", &a, &b);
     printf("value before swapping using pointers: %d %d\n", *p1, *p2);
    *p1= *p1 + *p2;
    *p2= *p1 - *p2;
    *p1= *p1 - *p2;
    printf("value after swapping using pointers: %d %d\n", *p1, *p2);

}