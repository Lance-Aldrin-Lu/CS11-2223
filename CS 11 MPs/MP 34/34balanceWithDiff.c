#include <stdio.h>

// Prototype
int symbolBalanceCounter(char symbol, char string[1000]);


int main()
{
    int n;

    scanf("%d\n", &n);

    for(int a = 0; a < n; a++)
    {
        char string[1000];
        int totalBool = 0;
        
        fgets(string, sizeof(string), stdin);

        int OpenParenCoun = symbolBalanceCounter(40, string);
        int CloseParenCoun = symbolBalanceCounter(41, string);

        int OpenBoxCoun = symbolBalanceCounter(91, string);
        int CloseBoxCoun = symbolBalanceCounter(93, string);

        int OpenCurlyCoun = symbolBalanceCounter(123, string);
        int CloseCurlyCoun = symbolBalanceCounter(125, string);

        int OpenSharpCoun = symbolBalanceCounter(60, string);
        int CloseSharpCoun = symbolBalanceCounter(62, string);

        // printf("%d\n", OpenParenCoun);
        // printf("%d\n", CloseParenCoun);
        // printf("%d\n", OpenBoxCoun);
        // printf("%d\n", CloseBoxCoun);
        // printf("%d\n", OpenCurlyCoun);
        // printf("%d\n", CloseCurlyCoun);
        // printf("%d\n", OpenSharpCoun);
        // printf("%d\n", CloseSharpCoun);

        if(OpenParenCoun == CloseParenCoun)
        {
            totalBool++;
        }

        if(OpenBoxCoun == CloseBoxCoun)
        {
            totalBool++;
        }

        if(OpenCurlyCoun == CloseCurlyCoun)
        {
            totalBool++;
        }

        if(OpenSharpCoun == CloseSharpCoun)
        {
            totalBool++;
        }

        if(totalBool == 4)
        {
            printf("BALANCED\n");
        }

        else
        {
            printf("NOT BALANCED\n");
        }

    }

    return 0;
}



// Functions
int symbolBalanceCounter(char symbol, char string[1000])
{
    int symbolCounter = 0;

    for(int i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == symbol)
        {
            symbolCounter++;
        }
    }

    return symbolCounter;
}

