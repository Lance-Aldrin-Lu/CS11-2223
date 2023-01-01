#include <stdio.h>

// Prototype
int symbolTypeChecker(char symbol, char string[100]);
int symbolBalanceChecker(int leftSymbolCount, int rightSymbolCount);



int main()
{
    int n;

    scanf("%d\n", &n);

    for(int a = 0; a < n; a++)
    {
        char string[100];

        fgets(string, sizeof(string), stdin);

        char symbolOne = '(';
        char symbolTwo = ')';

        int leftParenthesisCounter = symbolTypeChecker(symbolOne, string);
        int rightParenthesisCounter = symbolTypeChecker(symbolTwo, string);

        int verdict = symbolBalanceChecker(leftParenthesisCounter, rightParenthesisCounter);

        switch(verdict)
        {
            case 1:
                printf("BALANCED\n");
                break;

            case 0:
                printf("NOT BALANCED\n");
                break;
        }
    }

    return 0;
}



// Functions
int symbolTypeChecker(char symbol, char string[100])
{
    int symbolCounter = 0;

    for(int i = 0; i < 100; i++)
    {
        if(string[i] == symbol)
        {
            symbolCounter++;
        }

        else
        {
            continue;
        }
    }

    return symbolCounter;
}

int symbolBalanceChecker(int leftSymbolCount, int rightSymbolCount)
{
    if(leftSymbolCount == rightSymbolCount)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}