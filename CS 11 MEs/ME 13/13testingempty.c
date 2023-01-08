#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Prototypes
void convert_string_to_integers(char string[1024], int array[1024]);
void do_nothing();
void prepare_array_of_zeroes(int array[1024]);



int main () 
{
    int n;
    scanf("%d\n", &n);

    for(int z = 0; z < n; z++)
    {
        char str[1024];
        int intarr[1024];
        gets(str);

        // initialize blank list
        prepare_array_of_zeroes(intarr);

        // empty list
        if(str[0] == 'e')
        {
            do_nothing();
        }

        // not empty list
        else
        {
            convert_string_to_integers(str, intarr);
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
    }
   
   return 0;
}



// Functions
void convert_string_to_integers(char string[1024], int array[1024])
{
    int index = 0;
    
    const char s[2] = " ";
    char *token;
    
    token = strtok(string, s);
    
    while(token != NULL)
    {
        array[index] = atoi(token);
        index++;
        token = strtok(NULL, s);
       
    }
}


void do_nothing()
{

}


void prepare_array_of_zeroes(int array[1024])
{
    for(int i = 0; i < 1024; i++)
    {
        array[i] = 0;
    }
}





