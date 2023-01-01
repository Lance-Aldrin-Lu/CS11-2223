#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d\n", &n);

    for(int z = 0; z < n; z++)
    {
        char str[256];
        int real_a, imag_b, sign_X;

        fgets(str, sizeof(str), stdin);


        // FOR FIRST BINOMIAL
        if(str[0] != '-')
        {
            // get real_a
            real_a = str[0] - 48;

            // sign_X: 1 if positive and -1 if negative
            if(str[2] == '+')
            {
                sign_X = 1;
            }

            if(str[2] == '-')
            {
                sign_X = -1;
            }

            // get the index of "i1"
            int index_of_i1 = 0;

            for(int i = 0; str[i] != 'i'; i++)
            {
                index_of_i1++;
            }

            // get imag_b
            if(str[index_of_i1 - 1] != ' ')
            {
                imag_b = str[index_of_i1 - 1] - 48;
            }

            if(str[index_of_i1 - 1] == ' ')
            {
                imag_b = 1;
            }
        }


        if(str[0] == '-')
        {
            // get real_a
            real_a = (str[1] - 48) * -1;

            // sign_X: 1 if positive and -1 if negative
            if(str[3] == '+')
            {
                sign_X = 1;
            }

            if(str[3] == '-')
            {
                sign_X = -1;
            }

            // get the index of "i1"
            int index_of_i1 = 0;

            for(int i = 0; str[i] != 'i'; i++)
            {
                index_of_i1++;
            }

            // get imag_b
            if(str[index_of_i1 - 1] != ' ')
            {
                imag_b = str[index_of_i1 - 1] - 48;
            }

            if(str[index_of_i1 - 1] == ' ')
            {
                imag_b = 1;
            }
        }
        

        



        /* ___________________________ */

        // FOR SECOND BINOMIAL
        int real_c, imag_d, sign_Y;

        // get the index of the comma
        int index_comma = 0;

        for(int i = 0; str[i] != ','; i++)
        {
            index_comma++;
        }



        if(str[index_comma + 2] != '-')
        {
            // get real_c
            real_c = str[index_comma + 2] - 48;

            // sign_Y: 1 if positive and -1 if negative
            if(str[index_comma + 4] == '+')
            {
                sign_Y = 1;
            }

            if(str[index_comma + 4] == '-')
            {
                sign_Y = -1;
            }


            // get index of "i2"
            int index_of_i2 = index_comma;

            for(int j = index_comma; str[j] != 'i'; j++)
            {
                index_of_i2++;
            }

            // get imag_d
            if(str[index_of_i2 - 1] != ' ')
            {
                imag_d = str[index_of_i2 - 1] - 48;
            }

            if(str[index_of_i2 - 1] == ' ')
            {
                imag_d = 1;
            }
        }


        if(str[index_comma + 2] == '-')
        {
            // get real_c
            real_c = (str[index_comma + 3] - 48) * -1;

            // sign_Y: 1 if positive and -1 if negative
            if(str[index_comma + 5] == '+')
            {
                sign_Y = 1;
            }

            if(str[index_comma + 5] == '-')
            {
                sign_Y = -1;
            }


            // get index of "i2"
            int index_of_i2 = index_comma;

            for(int j = index_comma; str[j] != 'i'; j++)
            {
                index_of_i2++;
            }

            // get imag_d
            if(str[index_of_i2 - 1] != ' ')
            {
                imag_d = str[index_of_i2 - 1] - 48;
            }

            if(str[index_of_i2 - 1] == ' ')
            {
                imag_d = 1;
            }
        }



        /* ____________________________________ */

        // space for testing

        /* ____________________________________ */

        int final_real, final_imag;
        char final_sign;

        final_real = (real_a * real_c) + ((sign_X * imag_b) * (sign_Y * imag_d) * - 1);
        final_imag = (real_c * (sign_X * imag_b)) + (real_a * (sign_Y * imag_d));

        // positive coefficient of imaginary part
        if(final_imag >= 0)
        {
            final_sign = '+';

            if(final_imag == 0)
            {
                printf("%d\n", final_real);
            }

            else if(final_imag == 1)
            {
                printf("%d %c i\n", final_real, final_sign);
            }

            else
            {
                printf("%d %c %di\n", final_real, final_sign, final_imag);
            }
        }

        // negative coefficient of imaginary part
        if(final_imag < 0)
        {
            final_sign = '-';
            final_imag = abs(final_imag);

            if(final_imag == 0)
            {
                printf("%d\n", final_real);
            }

            else if(final_imag == 1)
            {
                printf("%d %c i\n", final_real, final_sign);
            }

            else
            {
                printf("%d %c %di\n", final_real, final_sign, final_imag);
            }
        }

    }

    return 0;
}


