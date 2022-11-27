#include <stdio.h>

// Prototypes
void get_matrix(int matrix[20][20], int row, int column);
void flip_matrix(int matrix[20][20], int row, int column);


int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Variable Initialization
        int matrix[20][20];
        int r, c;

        scanf("%d %d", &r, &c);

        get_matrix(matrix, r, c);
        flip_matrix(matrix, r, c);
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

void flip_matrix(int matrix[20][20], int row, int column)
{
    for(int a = 0; a < column; a++)
    {
        for(int b = 0; b < row; b++)
        {
            printf("%d ", matrix[b][a]);
        }

        printf("\n");
    }
}