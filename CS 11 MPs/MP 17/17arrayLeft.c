#include <stdio.h>

// Prototypes
void getUnlimitedInputs(int integerArray[1100], int counter);



int main()
{
    int n;

    scanf("%d", &n);

    for(int a = 0; a < n; a++)
    {
        int intArr[1100];
        int counter = 0;

        getUnlimitedInputs(intArr, counter);

        int size = intArr[0];
        int shift = intArr[size + 1];

        int moduloValue = shift % size;

        for(int i = moduloValue + 1; i <= size; i++)
        {
            printf("%d ", intArr[i]);
        }

        for(int k = 1; k <= moduloValue; k++)
        {
            printf("%d ", intArr[k]);
        }

        printf("\n");
    }

    return 0;
}




void getUnlimitedInputs(int integerArray[1100], int counter)
{
    char ch_arr[2];

    scanf("%d%c", &integerArray[0], &*ch_arr);

    counter = 1;
    while(*ch_arr != '\n')
    {
        scanf("%d%c", &integerArray[counter], &*ch_arr);
        counter += 1;
    }
}