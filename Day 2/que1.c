#include<stdio.h>
int check(char str[])
{
   int a=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='#')
          a++;
        else if(str[i]=='*')
          a--;
        else
          exit(0);
    }
    return a;
}
int main()
{
    int a;
    char str[10];
   printf("Enter the string to be checked\n");
   scanf("%s",str);
   a=check(str);
   if(a==0)
    printf("Valid \n");
   else
     printf("invalid");
     return 0;
}