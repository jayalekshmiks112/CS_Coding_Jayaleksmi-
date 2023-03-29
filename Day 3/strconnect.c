#include<stdio.h>
void main()
{
    char *ptr;
    ptr=(char *)malloc(10);
    strcpy(ptr,"Jayaaaa,");
    printf("%s, Address = %d\n",ptr,ptr);
    ptr=(char *)realloc(ptr,20);
    strcat(ptr," I love uuuu");
    printf("%s, Address = %u\n",ptr,ptr);
    free(ptr);
}
