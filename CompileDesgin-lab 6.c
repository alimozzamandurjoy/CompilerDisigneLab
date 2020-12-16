#include <stdio.h>
#include <string.h>
#include <math.h>

void calculate();

void calculate(char input[])
{
    printf("After Replacing:");
    char operators[10] = {'+', '-', '*', '%', '/', '^'};
    char operator;
    for (int i = 0; i < strlen(input); i++)
    {
        for (int j = 0; j < strlen(operators); j++)
        {
            if (input[i] == operators[j])
            {
                operator = operators[j];
                break;
            }
        }
    }
    int i = 0;
    char operands[100];
    int o = 0;
    while (input[i] != '=')
    {
        i++;
    }
    for (int j = i + 1; j < strlen(input); j++)
    {

        if (input[j] == ' ' || input[j] == operator)
        {
            continue;
        }
        else if (input[j] == ';')
        {
            break;
        }
        else
        {
            operands[o] = input[j];
            o++;
        }
    }
    int result;
    operands[0] = operands[0] - '0';
    operands[1] = operands[1] - '0';
    if ((operands[0] >= 0 && operands[0] <= 9) && (operands[1] >= 0 && operands[1] <= 9))
    {
        if (operator == '+')
        {
            result = operands[0] + operands[1];
        }
        else if (operator == '-')
        {
            result = operands[0] - operands[1];
        }
        else if (operator == '*')
        {
            result = operands[0] * operands[1];
        }
        else if (operator == '%')
        {
            result = operands[0] % operands[1];
        }
        else if (operator == '^')
        {
            result = pow(operands[0], operands[1]);
        }
        else if (operator == '/')
        {
            result = operands[0] / operands[1];
        }
        printf("%c = %ld ;", input[0], result);
    }
    else
    {
        printf("%s", input);
    }
}

void sreplace(char input[])
{
    printf("Which letter do you want to change?\n");
    char r, l;
    scanf(" %c", &r);
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == r)
        {
            printf("Replacing Letter:\n");
            scanf("  %c", &l);
            input[i] = l;
            if (l >= '0' && l <= '9')
            {
                calculate(input);
            }
            else if (l == '+' || l == '-' || l == '*' || l == '/' || l == '%' || l == '^')
            {
                calculate(input);
            }
            else
            {
                printf("%s", input);
            }
            break;
        }
    }
}

int main()
{
    char input[100] = "";
    char s;
    printf("\nThis Problem is solved by Alimozzman Durjoy\nID: 181-15-11017\n\n\n");
    printf("input:");
    gets(input);
    sreplace(input);
    while (1)
    {
        printf("\n\nContinue? [y/n]:\n");
        scanf("  %c", &s);
        if (s == 'n')
        {
            break;
        }
        else
        {
            printf("\ninput:");
            scanf(" %s", &input);
            sreplace(input);
        }
    }
    return 0;
}
