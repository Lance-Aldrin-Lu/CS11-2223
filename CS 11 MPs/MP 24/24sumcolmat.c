#include <stdio.h>

// Prototypes
void get_matrix(int matrix[20][20], int row, int column);
int add_column_matrix(int matrix[20][20], int size, int spec_column);


int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Variable Initialization
        int size, column, total;
        int matrix[20][20];

        // Get size of square matrix
        scanf("%d", &size);

        // Get the specific column (starting at 1) 
        scanf("%d", &column);

        // Get the matrix itself
        get_matrix(matrix, size, size);

        // Function that will return the total value of a column
        total = add_column_matrix(matrix, size, column);

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

int add_column_matrix(int matrix[20][20], int size, int spec_column)
{
    int counter = 0;

    for(int a = 0; a < size; a++)
    {
        counter += matrix[a][spec_column - 1];
    }

    return counter;
}