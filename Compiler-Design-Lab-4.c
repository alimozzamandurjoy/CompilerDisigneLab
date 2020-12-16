#include<stdio.h>
#include<string.h>
int main()
{
    printf("\nThis Problem is solved by Alimozzman Durjoy\nID: 181-15-11017\n\n\n");
    printf("Enter String:\n");
    char str[1000];
    int i,flag=0;
    gets(str);
    for(i=0; i<strlen(str); i++)
    {
        if( str[i]!=' ' && (str[i]<'A' || str[i]>'z') || (str[i]>'Z' && str[i]<'a') )
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("\nThis is not string\n");
    else
        printf("\nThis is string\n");

}
