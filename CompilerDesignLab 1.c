#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i, len;
    int freq[26];
    printf("\nThis Problem is solved by Alimozzman Durjoy\nID: 181-15-11017\n\n\n");
    printf("Enter any string: ");
    gets(str);

    len = strlen(str);

    for(i=0; i<26; i++)
    {
        freq[i] = 0;
    }


    for(i=0; i<len; i++)
    {

        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i] - 97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i] - 65]++;
        }
    }


    printf("\nFrequency of all characters in the given string: \n");
    for(i=0; i<26; i++)
    {

        if(freq[i] != 0)
        {
            printf("'%c' = %d\n", (i + 97), freq[i]);
        }
    }

    return 0;
}
