#include<stdio.h>
void main()
{
    int a=12;
    int *ptr= &a;
    printf("addres of a: %p\n", &a);
    printf("addres of a using pointer: %p\n", ptr);
    printf("value of a: %d\n", a);
    printf("value of a using pointer: %d\n", *ptr++);

}