#include <stdio.h>
#include <string.h>




int main()
{
    int n;
    scanf("%d\n", &n);

    for(int z = 0; z < n; z++)
    {
        char orig_str[512];
        char str_without_comma[512];
        char unique[512];

        fgets(orig_str, sizeof(orig_str), stdin);


        // remove the space and comma
        int index = 0;
        for(int k = 0; orig_str[k] != '\n'; k++)
        {
            if(orig_str[k] != ' ' && orig_str[k] != ',')
            {
                str_without_comma[index] = orig_str[k];
                index++;
            }
        }

        // number of letters is the same as the index
        int num_ele = index;





        int index_unique = 0;

        int frequency_table[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


        for(int i = 0; i < num_ele; i++)
        {
            // Lowercase
            if(str_without_comma[i] >= 'a' && str_without_comma[i] <= 'z')
            {
                if(frequency_table[str_without_comma[i] - 'a'] == 0)
                {
                    frequency_table[str_without_comma[i] - 'a'] = 1;
                    unique[index] = str_without_comma[i];
                    index_unique++;
                }
            }

            // Uppercase
            if(str_without_comma[i] >= 'A' && str_without_comma[i] <= 'Z')
            {
                if(frequency_table[str_without_comma[i] - 'A'] == 0)
                {
                    frequency_table[str_without_comma[i] - 'A'] = 1;
                    unique[index] = str_without_comma[i];
                    index_unique++;
                }
            }
        }

        for(int j = 0; j < index_unique; j++)
        {
            printf("%c", unique[j]);
        }

        printf("\n");


    }

    return 0;
}





