#include <stdio.h>

void get_nums(int arr[512]);
void Command_One_Insert(int arr[512], int index, int value);
void Command_Two_Delete(int arr[512], int index);
void Command_Three_Transverse(int arr[512]);



int main()
{
    int n;
    scanf("%d\n", &n);

    for(int z = 0; z < n;)
    {
        // GET THE INPUT STRINGS
        int arr[512];
        for(int i = 0; i < 512; i++)
        {
            arr[i] = 0;
        }

        get_nums(arr);


        // GET COMMANDS
        char under, some;
        int option;

        int index, value;

        scanf("%c%d%c", &under, &option, &some);

        while(option != 3)
        {
            switch(option)
            {
                case 1:
                    scanf("%d %d%c", &index, &value, &some);
                    Command_One_Insert(arr, index, value);
                    break;

                case 2:
                    scanf("%d%c", &index, &some);
                    Command_Two_Delete(arr, index);
                    break;
            }
            scanf("%c%d%c", &under, &option, &some);
        }
        Command_Three_Transverse(arr);
        z++;

		
    }

    return 0;
}




// Functions
void get_nums(int arr[512])
{
    char space[2];
    
    //infinite inputs
    scanf("%d%c", &arr[0], &*space);
    int count = 1;

    // case if "empty"
	if(arr[0] == 0)
	{
		arr[0] = 0;
	}
	
    // numbers only 
    else
	{
		while(*space != '\n')
        {
            scanf("%d%c", &arr[count], &*space);
            count++;
        }
	}
}




void Command_One_Insert(int arr[512], int index, int value)
{
    arr[index] = value;
}


void Command_Two_Delete(int arr[512], int index)
{
    arr[index] = 0;
}


void Command_Three_Transverse(int arr[512])
{
    for(int i = 0; i < 512; i++)
    {
        if(arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}