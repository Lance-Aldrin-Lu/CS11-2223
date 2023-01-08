#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main () 
{
    char str[1024];
    int intarr[1024];
    scanf("%[^\n]s", str);
    

    int dummy_variable = 0;

    // initialize blank list
    for(int i = 0; i < 1024; i++)
    {
        intarr[i] = 0;
    }

    // empty list
    if(str[0] == 'e')
    {
        dummy_variable = 1; // does nothing
    }


    // not empty list
    else
    {
        int intchar;
        int index = 0;

        const char s[2] = " ";
        char *token;

        token = strtok(str, s);

        while(token != NULL)
        {
            intarr[index] = atoi(token);
            index++;
            token = strtok(NULL, s);
           
        }
    }

    printf("%d\n", intarr[0]);
    printf("%d\n", intarr[1]);
    printf("%d\n", intarr[2]);
    printf("%d\n", intarr[3]);
    printf("%d\n", intarr[4]);
    printf("%d\n", intarr[5]);
    printf("%d\n", intarr[6]);
    printf("%d\n", intarr[7]);
    printf("%d\n", intarr[8]);
    printf("%d\n", intarr[9]);
   
   return(0);
}