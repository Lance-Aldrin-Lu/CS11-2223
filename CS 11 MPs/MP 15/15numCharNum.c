#include <stdio.h>

// Prototypes
void number_to_digit_chunks(int number, int bundle_left[3], int bundle_right[3]);
int counting_letter_number_chunk(int bundle[3]);



int main()
{
    int n;
    scanf("%d", &n);

    for(int z = 0; z < n; z++)
    {
        int digit_bundle_one[3];
        int digit_bundle_two[3];

        int number;
        scanf("%d", &number);


        if(number == 0)
        {
            int zero = 4;
            printf("%d\n", zero);
        }

        else
        {
            if(number >= 1000)
            {
                number_to_digit_chunks(number, digit_bundle_one, digit_bundle_two);

                int num_char_left = counting_letter_number_chunk(digit_bundle_one);
                int num_char_right = counting_letter_number_chunk(digit_bundle_two);

                // + 8 for "thousand" word
                int total = num_char_left + num_char_right + 8;

                printf("%d\n", total);
            }

            else
            {
                number_to_digit_chunks(number, digit_bundle_one, digit_bundle_two);

                int num_char_right = counting_letter_number_chunk(digit_bundle_two);

                int total = num_char_right;

                printf("%d\n", total);
            }

        }
    }

    return 0;
}




// Functions
void number_to_digit_chunks(int number, int bundle_left[3], int bundle_right[3])
{
    int array[6];
    
    int n = number;
    int digit;
    
    for(int i = 5; i >= 0; i--)
    {
        digit = n % 10;
        array[i] = digit;
        n = n / 10;
    }

    bundle_right[2] = array[5];
    bundle_right[1] = array[4];
    bundle_right[0] = array[3];

    bundle_left[2] = array[2];    
    bundle_left[1] = array[1];    
    bundle_left[0] = array[0];
}



int counting_letter_number_chunk(int bundle[3])
{
    int word_counter = 0;
	
    // hundreds place
    if(bundle[0] != 0)
    {
        // n + "hundred"
        word_counter += 7;

        // 3 letters
        if(bundle[0] == 1 ||
           bundle[0] == 2 ||
           bundle[0] == 6)
        {
            word_counter += 3;
        }

        // 4 letters
        if(bundle[0] == 4 ||
           bundle[0] == 5 ||
           bundle[0] == 9)
        {
            word_counter += 4;
        }

        // 5 letters
        if(bundle[0] == 3 ||
           bundle[0] == 7 ||
           bundle[0] == 8)
        {
            word_counter += 5;
        }
    }

    // tens and ones place
    if(bundle[1] != 0 || bundle[2] != 0)
    {
        // cases where 1 tenths and n ones
        if(bundle[1] == 1 && bundle[2] == 0)
        {
            // "ten"
            word_counter += 3;
        }

        if(bundle[1] == 1 && bundle[2] == 1)
        {
            // "eleven"
            word_counter += 6;
        }

        if(bundle[1] == 1 && bundle[2] == 2)
        {
            // "twelve"
            word_counter += 6;
        }

        if(bundle[1] == 1 && bundle[2] == 3)
        {
            // "thirteen"
            word_counter += 8;
        }

        if(bundle[1] == 1 && bundle[2] == 4)
        {
            // "fourteen"
            word_counter += 8;
        }

        if(bundle[1] == 1 && bundle[2] == 5)
        {
            // "fifteen"
            word_counter += 7;
        }

        if(bundle[1] == 1 && bundle[2] == 6)
        {
            // "sixteen"
            word_counter += 7;
        }

        if(bundle[1] == 1 && bundle[2] == 7)
        {
            // "seventeen"
            word_counter += 9;
        }

        if(bundle[1] == 1 && bundle[2] == 8)
        {
            // "eighteen"
            word_counter += 8;
        }

        if(bundle[1] == 1 && bundle[2] == 1)
        {
            // "nineteen"
            word_counter += 8;
        }



        // regular cases for tenths place
        // six letters
        if(bundle[1] == 2 ||
           bundle[1] == 3 ||
           bundle[1] == 4 ||
           bundle[1] == 8 ||
           bundle[1] == 9)
        {
            word_counter += 6;
        }

        // five letters
        if(bundle[1] == 5 || bundle[1] == 6)
        {
            word_counter += 5;
        }

        // seven letters
        if(bundle[1] == 7)
        {
            word_counter += 7;
        }



        // regular cases for ones place
        // 3 letters
        if(bundle[2] == 1 ||
           bundle[2] == 2 ||
           bundle[2] == 6)
        {
            word_counter += 3;
        }

        // 4 letters
        if(bundle[2] == 4 ||
           bundle[2] == 5 ||
           bundle[2] == 9)
        {
            word_counter += 4;
        }

        // 5 letters
        if(bundle[2] == 3 ||
           bundle[2] == 7 ||
           bundle[2] == 8)
        {
            word_counter += 5;
        }
    }

    return word_counter;
}