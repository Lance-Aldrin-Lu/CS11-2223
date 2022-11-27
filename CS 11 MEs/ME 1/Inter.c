#include <stdio.h>

int main()
{

    // Data type banks
    int n, x1, y1, x2, y2, x3, y3, x4, y4;
    int m1, m2, b1, b2;
    int x_val, y_val;
    
    int counter;

    int check_arr[20];
    int multi_arr[20][2];
    
    int pre_counter;
    pre_counter = 0;

    // Get number of rows
    scanf("%d", &n);

    // Iteration to get the Inputs AND know valid AND evaluation
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

        
        // Condition where one pair of points are not distinct
        if((x1 == x2 && y1 == y2) || (x3 == x4 && y3 == y4))
        {
            // 2 = "invalid input"
            // Put 2 in Check Array
            check_arr[i] = 2;
            continue;
        }
        
        
        // Formula for Slopes
        m1 = (y2 - y1) / (x2 - x1);
        m2 = (y4 - y3) / (x4 - x3);

        // Formula for Constants
        b1 = (-1 * (m1 * x1)) + y1;
        b2 = (-1 * (m2 * x3)) + y3;

        
        // Condition where they are parallel
        if(m1 == m2)
        {
            // 1 = "do not intersect"
            // Put 1 in Check Array
            check_arr[i] = 1;
        }

        
        
        // Condition where all inputs are valid and will intersect
        else
        {
            // Derived Expressions
            x_val = (((-1 * b2) - (-1 * b1)) / ((m1 * -1) - (m2 * -1)));
            y_val = (((m2 * b1) - (m1 * b2)) / ((m1 * -1) - (m2 * -1)));
            
            // 3
            // Put 3 in Check Array
            check_arr[i] = 3;
            // Put X_Val and Y_Val in Multi-Array
            multi_arr[pre_counter][0] = x_val;
            multi_arr[pre_counter][1] = y_val;

            pre_counter += 1;
        }

    }


    // Print the Outputs
    for(int j = 0; j < n; j++)
    {
        // If 1; Do not intersect
        if(check_arr[j] == 1)
        {
            printf("do not intersect\n");
        }

        // If 2; invalid input
        else if(check_arr[j] == 2)
        {
            printf("invalid input\n");
        }

        // If 3; all things right
        else if(check_arr[j] == 3)
        {
            printf("%d %d\n", multi_arr[counter][0], multi_arr[counter][1]);
            counter += 1;
        }


    }


    
    return 0;
}