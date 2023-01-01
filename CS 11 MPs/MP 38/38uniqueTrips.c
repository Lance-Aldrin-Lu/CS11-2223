#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);

    
    for(int i = 0; i < n; i++)
    {
        int array_input[100];
        char space[2];
    
        //infinite inputs
        scanf("%d%c", &array_input[0], &*space);
        int count = 1;

        while(*space != '\n')
        {
            scanf("%d%c", &array_input[count], &*space);
            count++;
        }




        //unique triplets with 0 sum
        int counter = 0;

        for(int a = 0; a < count - 2; a++)
        {
            for(int b = a + 1; b < count - 1; b++)
            {
                for(int c = b + 1; c < count; c++)
                {
                    if((array_input[a] + array_input[b] + array_input[c]) == 0)
                    {
                        if(((array_input[a]) != (array_input[b])) != (array_input[c]))
                        {
                            counter++;
                        }

                        else
                        {
                            counter = 1;
                        }
                    }
                }
            }
        }
        
        printf("%d\n", counter);
    }


    return 0;
}