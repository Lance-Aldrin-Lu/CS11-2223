#include <stdio.h>

int main() 
{
    
    // Bank for Initialized Data Types of Variables
    int n;
    int ix1, ix2, ix3, ix4, iy1, iy2, iy3, iy4;
    int ox1, ox2, ox3, ox4, oy1, oy2, oy3, oy4;
    int m1, m2, b1, b2;
    int x_val, y_val;


    // Mass Storage of Numbers
    // Set at Max Limit (1 < n < [20])
    int pair1[20][2]; // x1, y1
    int pair2[20][2]; // x2, y2
    int pair3[20][2]; // x3, y3
    int pair4[20][2]; // x4, y4


    // Number of Rows (n)
    scanf("%d", &n);
    
    
    // Input Loop for User Inputs and Storage
    for(int i=0; i<n; i++){
        scanf("%d %d %d %d %d %d %d %d", &ix1, &iy1, &ix2, &iy2, &ix3, &iy3, &ix4, &iy4);
        pair1[i][0] = ix1;
        pair1[i][1] = iy1;
        pair2[i][0] = ix2;
        pair2[i][1] = iy2;
        pair3[i][0] = ix3;
        pair3[i][1] = iy3;
        pair4[i][0] = ix4;
        pair4[i][1] = iy4;
    }


    // Output Loop for Evaluation and Results
    for(int i=0; i<n; i++)
    {
        // Calling the 8 set of numbers from 
        ox1 = pair1[i][0];
        oy1 = pair1[i][1];
        ox2 = pair2[i][0];
        oy2 = pair2[i][1];
        ox3 = pair3[i][0];
        oy3 = pair3[i][1];
        ox4 = pair4[i][0];
        oy4 = pair4[i][1];

        // Case 1: Points are not distinct (invalid points)
        // First Pair
        if ((ox2 == ox1) && (oy2 == oy1))
        {
            printf("invalid input\n");
            continue;
        }
        
        // Second Pair
        else if ((ox4 == ox3) && (oy4 == oy3))
        {
            printf("invalid input\n");
            continue;
        }



        // Derived from the Slop Form
        // Slopes (m)
        m1 = (oy2-oy1) / (ox2-ox1);
        m2 = (oy4-oy3) / (ox4-ox3);
        
        // B - value (b)
        b1 = oy2 - (m1 * ox2);
        b2 = oy4 - (m2 * ox4);



        // Case 2: Lines are parallel due to same slopes.
        // Sub-Case (Unconsidered): Two lines are the same (same slopes and b - values)
        if(m1 == m2)
        {
            printf("do not intersect\n");
        }
    

        // Case 3: All points are valid. (Does not meet Case 1 and Case 2)
        else
        {
            // Derived from the Slope Form and General Form (Formula)
            x_val = (((-1 * b2) - (-1 * b1)) / ((m1 * -1) - (m2 * -1)));
            y_val = (((m2 * b1) - (m1 * b2)) / ((m1 * -1) - (m2 * -1)));

            printf("%d %d\n", x_val, y_val);
        }

    }


    return 0;
}