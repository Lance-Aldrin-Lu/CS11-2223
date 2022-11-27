#include <stdio.h>

// Prototypes
void get_matrix(int matrix[20][20], int row, int column);
int NW_to_SE_add(int matrix[20][20], int size);


int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Variable Initialization
        int size, total;
        int matrix[20][20];

        // Get size of square matrix
        scanf("%d", &size);

        // Get the square matrix itself
        get_matrix(matrix, size, size);

        // Get the total of the -1 slope diagonal
        total = NW_to_SE_add(matrix, size);

        // Output
        printf("%d\n", total);
    }

    return 0;
}



void get_matrix(int matrix[20][20], int row, int column)
{
	for(int a = 0; a < row; a++)
	{
		for(int b = 0; b < column; b++)
		{
			scanf("%d", &matrix[a][b]);	
		}
	}
}

int NW_to_SE_add(int matrix[20][20], int size)
{
    int counter = 0;

    for(int a = 0; a < size; a++)
    {
        counter += matrix[a][a];
    }

    return counter;
}