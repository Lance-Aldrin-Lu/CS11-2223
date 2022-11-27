#include <stdio.h>

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


int main()
{

    int row1, column1;
    int row2, column2;

    int matrix_one[20][20];
    int matrix_two[20][20];
    int matrix_final[20][20] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    int column_coun, row_coun, ele_coun;

    // Get the first matrix
    scanf("%d %d", &row1, &column1);
    get_matrix(matrix_one, row1, column1);

    // Get the second matrix
    scanf("%d %d", &row2, &column2);
    get_matrix(matrix_two, row2, column2);

    // Determine if valid or not

    // R1; C1 === R2; C2
    // valid if C1 == R2

    if(column1 != row2)
    {
        printf("invalid input\n");
    }

    // Valid
    // Note: R1; C2 will be the the size of final matrix
    else
    {
        row_coun = row1;
        column_coun = column2;
        ele_coun = row2;

        // Compute
        for(int j = 0; j < row_coun; j++)
        {
            for(int k = 0; k < column_coun; k++)
            {
                for(int l = 0; l < ele_coun; l++)
                {
                    matrix_final[j][k] += matrix_one[j][l] * matrix_two[l][k];
                }
            }
        }

        // Output
        for(int m = 0; m < row_coun; m++)
        {
            for(int n = 0; n < column_coun; n++)
            {
                printf("%d ", matrix_final[m][n]);
            }

            printf("\n");
        }

    }

    

    return 0;
}