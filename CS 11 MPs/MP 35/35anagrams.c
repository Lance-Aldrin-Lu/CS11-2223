#include <stdio.h>
#include <string.h>

// Prototypes
void lower_all(char orig_str[1000]);
void get_string_one(char orig_str[1000], char first_str[1000]);
void get_string_two(char orig_str[1000], char second_str[1000]);
void freq_of_char(char str[1000], int freq_table[26]);
int check_similar(int freq_one[26], int freq_two[26]);



int main()
{
    int n;

    scanf("%d\n", &n);

    for(int i = 0; i < n; i++)
    {
        // Variable Initialization
        char orig_str[2000];
        char first_str[2000];
        char second_str[2000];

        int table_freq_one[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	    						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        int table_freq_two[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	    						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};



        fgets(orig_str, sizeof(orig_str), stdin);

        lower_all(orig_str);

        get_string_one(orig_str, first_str);
        get_string_two(orig_str, second_str);

        freq_of_char(first_str, table_freq_one); 
        freq_of_char(second_str, table_freq_two);

        int not_similar_bool = check_similar(table_freq_one, table_freq_two);

        switch(not_similar_bool)
        {
            case 0:
                printf("Anagram\n");
                break;

            case 1:
                printf("Not Anagram\n");
                break;
        }

    }
        
    return 0;

}



// Functions

void lower_all(char orig_str[1000])
{
    for(int i = 0; orig_str[i] != '\0'; i++)
    {
        orig_str[i] = tolower(orig_str[i]);
    }
}

void get_string_one(char orig_str[1000], char first_str[1000])
{
    for(int i = 0; orig_str[i] != ','; i++)
    {
        first_str[i] = orig_str[i];
    }
}

void get_string_two(char orig_str[1000], char second_str[1000])
{
    // Get index of comma first
    int index_comma = 0;

    for(int i = 0; orig_str[i] != ','; i++)
    {
        index_comma++;
    }


    for(int i = index_comma + 1; orig_str[i] != '\0'; i++)
    {
        int index_arr = i - (index_comma + 1);
        second_str[index_arr] = orig_str[i];
    }
}

void freq_of_char(char str[1000], int freq_table[26])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        freq_table[str[i] - 97]++;
    }
}

int check_similar(int freq_one[26], int freq_two[26])
{
    int not_similar_bool = 0;

    for(int i = 0; i < 26; i++)
    {
        if((freq_one[i] == 0) && (freq_two[i] == 0))
        {
            continue;
        }

        else if((freq_one[i] != 0) && (freq_two[i] != 0))
        {
            continue;
        }

        else
        {
            not_similar_bool = 1;
            break;
        }
    }

    return not_similar_bool;
}