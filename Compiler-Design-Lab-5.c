#include<stdio.h>
#include<string.h>
int main()
{
    printf("\nThis Problem is solved by Alimozzman Durjoy\nID: 181-15-11017\n\n\n");
    printf("Enter a line: ");
    char a[100],var[100]=" ",var2[100]=" ", oprtr[20]=" ", intt[100]=" ";
    int i=0,j=0,flag=1, o=0, in=0, lenth;
    gets(a);
    lenth= strlen(a);
    if(a[0]=='i' && a[1]=='f')
    {
        i=2;
        while(a[i]==' ') i++;
        if(a[i++]=='(')
        {
            while(a[i]==' ') i++;
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || a[i]=='_')
            {
                j=0;
                while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9') || a[i]=='_')
                {
                    ;
                    var[j++]=a[i++];
                }
                while(a[i]==' ') i++;
                if(a[i]=='<' || a[i]=='>' || a[i]=='=' || a[i]=='!')
                {
                    if(a[i+1]=='=')
                    {
                        oprtr[0]=a[i];
                        oprtr[1]=a[i+1];
                        i+=2;
                    }
                    else oprtr[0]=a[i],i++;
                }
                while(a[i]==' ') i++;
                j=0;
                while(a[i]>='0' && a[i]<='9')
                {
                    intt[j++]=a[i++];
                }
                while(a[i]==' ') i++;
                if(a[i]==')' && a[i+1]=='\0')
                {
                    printf("\nIdentifier  = if\n");
                    printf("Parenthesis = ()\n");
                    printf("Variable    = %s\n",var);
                    printf("Operator    = %s\n",oprtr);
                    printf("Integer     = %s\n",intt);
                    flag=0;
                }
            }
        }

    }
    else if(a[0]=='e' && a[1]=='l' && a[2]=='s' && a[3]=='e' && a[4]==' ' && a[5]=='i' && a[6]=='f')
    {
        i=7;
        while(a[i]==' ') i++;
        if(a[i++]=='(')
        {
            while(a[i]==' ') i++;
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
            {
                j=0;
                while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
                {
                    ;
                    var[j++]=a[i++];
                }
                while(a[i]==' ') i++;
                if(a[i]=='<' || a[i]=='>')
                {
                    if(a[i+1]=='=')
                    {
                        oprtr[0]=a[i];
                        oprtr[1]=a[i+1];
                        i+=2;
                    }
                    else oprtr[0]=a[i],i++;
                }
                while(a[i]==' ') i++;
                j=0;
                while(a[i]>='0' && a[i]<='9')
                {
                    intt[j++]=a[i++];
                }
                while(a[i]==' ') i++;
                if(a[i]==')' && a[i+1]=='\0')
                {
                    printf("\nIdentifier  = else if\n");
                    printf("Parenthesis = ()\n");
                    printf("Variable    = %s\n",var);
                    printf("Operator    = %s\n",oprtr);
                    printf("Integer     = %s\n",intt);
                    flag=0;
                }
            }
        }
    }
    else if(a[0]=='w' && a[1]=='h' && a[2]=='i' && a[3]=='l' && a[4]=='e')
    {
        i=5;
        while(a[i]==' ') i++;
        if(a[i++]=='(')
        {
            while(a[i]==' ') i++;
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
            {
                j=0;
                while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
                {
                    ;
                    var[j++]=a[i++];
                }
                while(a[i]==' ') i++;
                if(a[i]=='<' || a[i]=='>')
                {
                    if(a[i+1]=='=')
                    {
                        oprtr[0]=a[i];
                        oprtr[1]=a[i+1];
                        i+=2;
                    }
                    else oprtr[0]=a[i],i++;
                }
                while(a[i]==' ') i++;
                j=0;
                while(a[i]>='0' && a[i]<='9')
                {
                    intt[j++]=a[i++];
                }
                while(a[i]==' ') i++;
                if(a[i]==')' && a[i+1]=='\0')
                {
                    printf("\nIdentifier  = while\n");
                    printf("Parenthesis = ()\n");
                    printf("Variable    = %s\n",var);
                    printf("Operator    = %s\n",oprtr);
                    printf("Integer     = %s\n",intt);
                    flag=0;
                }
            }
        }
    }
    else if(a[0]=='f' && a[1]=='o' && a[2]=='r')
    {
        i=3;
        while(a[i]==' ') i++;
        if(a[i++]=='(')
        {
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
            {
                j=0;
                while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
                {
                    ;
                    var[j++]=a[i++];
                }
                while(a[i]==' ') i++;
                if(a[i]=='=')
                {
                    while(a[i]==' ') i++;
                    while(a[i]>='0' && a[i]<='9')
                    {
                        intt[in++]=a[i++];
                    }
                    while(a[i]==' ') i++;
                    if(a[i]==';')
                    {
                        while(a[i]==' ') i++;
                        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
                        {
                            var[j++]=',';
                            while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
                            {
                                var[j++]=a[i++];
                            }
                            while(a[i]==' ') i++;
                            if(a[i]=='<' || a[i]=='>')
                            {
                                if(a[i+1]=='=')
                                {
                                    oprtr[o++]=a[i];
                                    oprtr[o++]=a[i+1];
                                    i+=2;
                                }
                                else oprtr[o++]=a[i],i++;
                            }
                            while(a[i]==' ') i++;
                            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
                            {
                                var[j++]=',';
                                while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
                                {
                                    var[j++]=a[i++];
                                }
                                while(a[i]==' ') i++;
                                if(a[i]==';')
                                {
                                    while(a[i]==' ') i++;
                                    if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
                                    {
                                        var[j++]=',';
                                        while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
                                        {
                                            ;
                                            var[j++]=a[i++];
                                        }
                                        if(a[i]=='+')
                                        {
                                            if(a[i]=='+')
                                            {
                                                oprtr[o++]=',';
                                                oprtr[o++]='+';
                                                oprtr[o++]='+';
                                            }
                                        }
                                        else if(a[i]=='-')
                                        {
                                            if(a[i]=='-')
                                            {
                                                oprtr[o++]=',';
                                                oprtr[o++]='-';
                                                oprtr[o++]='-';
                                            }
                                        }
                                        while(a[i]==' ') i++;
                                        if(a[i]==')' && a[i]=='\0')
                                        {
                                            printf("\nIdentifier  = for\n");
                                            printf("Parenthesis = ()\n");
                                            printf("Variable    = %s\n",var);
                                            printf("Operator    = %s\n",oprtr);
                                            printf("Integer     = %s\n",intt);
                                            printf("Closing     = ;,;");
                                            flag=0;
                                        }

                                    }
                                }
                            }
                        }
                    }

                }
            }
        }
    }
    else if(a[0]=='s' && a[1]=='c' && a[2]=='a' && a[3]=='n' && a[4]=='f' && a[5]=='(')
    {

    }
    else if(a[0]=='p' && a[1]=='r' && a[2]=='i' && a[3]=='n' && a[4]=='t' && a[5]=='f')
    {

    }

    if(flag==1) printf("Input not valid\n");



}
