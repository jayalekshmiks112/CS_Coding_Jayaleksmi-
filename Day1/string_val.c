/*String validity: # or & having same count*/

#include<stdio.h>
#include<math.h>
void main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%s",&str);
    int count =0,n;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='#')
            count--;
        else if(str[i]=='*')
            count++;
        else
        {
            printf("Invalid symbols. only # and * are allowed!!");
            exit(0);
        }
    }
    if(count==0)
        printf("Valid string");
    else
    {
        if(count<0)
        {

            printf("Count: %d",count);
            for(int j=0;j<abs(count);j++)
            {
                printf("\nValid string: %s",str);
                printf("*");
            }

        }

        else
        {
            printf("Count: %d",count);
            for(int j=0;j<abs(count);j++)
            {
                printf("\nValid string: %s",str);
                printf("#");
            }
        }
    }
}
