#include <stdio.h>

int main()
{
    int n;
    int x1, x2, x3, x4, y1, y2, y3, y4;
    int m1, m2, b1, b2;
    int a, b;

    int run1, run2, rise1, rise2;
    int ver_line1x, ver_line2x;
    int hor_line1x, hor_line2x;

    scanf("%d", &n);


    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

        // Runs = 0 (Vertical Line)
        run1 = x2 - x1;
        run2 = x4 - x3;

        // If both vertical (run1 == 0 and run2 == 0)
        if(run1 == 0 && run2 == 0)
        {
            // Overlap (if x1 = x2 = x3 = x4) 
            // y3 between y1 and y2
            // y4 between y1 and y2
            // y1 between y3 and y4
            // y2 between y3 and y4
            if( (y1 <= y3) && (y3 <= y2) || (y1 >= y3) && (y3 >= y2)|| 
                (y1 <= y4) && (y4 <= y2) || (y1 >= y4) && (y4 >= y2)||
                (y3 <= y1) && (y1 <= y4) || (y3 >= y1) && (y1 >= y4)||
                (y3 <= y2) && (y2 <= y4) || (y3 >= y2) && (y2 >= y4) )
            {
                printf("invalid input\n");
            }
           
            // Intersects on one point (if x1 = x2 = x3 = x4)
            else if(y1 == y3)
            {
                printf("%d %d", x1, y1);
            }
            
            else if(y2 == y3)
            {
                printf("%d %d", x2, y2);
            }
            
            else if(y1 == y4)
            {
                printf("%d %d", x1, y1);
            }

            else if(y2 == y4)
            {
                printf("%d %d", x2, y2);
            }
            

            // Else, doesnt intersect
            else
            {
                printf("doesnt intersect\n");
            }
        }


        // If one of them is vertical (run1 == 0 or run2 == 0)
        if(run1 == 0 || run2 == 0)
            // If run1 (x2-x1) = 0 
            if(run1 == 0)
            {
                // Check if the x of the vertical line is inside of the normal line
                
                // If inside of x3 and x4
                    // ver_line1x = x1
                    // norm_line2y = m2 * (ver_line1x) + b2
                    
                    // If norm_line2y inside of y1 and y2
                        // Intersects at (ver_line1x, norm_line2y)
                    // Else
                        // does not intersect


                // If outside of x3 and x4
                // does not intersect
            }
            


            else if(run2 = 0)
            {
            // If run2 (x4-x3) = 0
            // Check if the x of the vertical line is inside of the normal line
            
            
                // If inside of x1 and x2
                    // ver_line2x = x3
                    // norm_line1y = m1 * (ver_line2x) + b1

                    // If norm_line1y inside of y3 and y4
                        // Intersects at (ver_line2x, norm_line1y)
                    // Else
                        // does not intersect

                // If outside of x1 and x2
                    // does not intersect
            }


        rise1 = y2 - y1;
        rise2 = y4 - y3;

        // If both horizontal (if rise1 == 0 and rise2 == 0)
        // Overlap (if y1 = y2 = y3 = y4)
            // x3 between x1 and x2
            // x4 between x1 and x2
            // x1 between x3 and x4
            // x2 between x3 and x4
            // then, ivalid input

            // Intersects on one point (if y1 = y2 = y3 = y4)
            // x1 = x3 => (x1 , y1)
            // x2 = x3 => (x2 , y2)
            // x1 = x4 => (x1 , y1)
            // x2 = x4 => (x2 , y2)
            

            // Else, doesnt intersect

        
        // If one of them is horizontal (rise1 == 0 or rise2 == 0)
        
            // If rise1 (y2-y1) = 0 
            // Check if the x of the horizontal line is inside of the normal line
                
                // Check If inside of x3 and x4
                    // hor_line1x = x1
                    // norm_line2y = m2 * (hor_line1x) + b2
                    
                    // If norm_line2y inside of y1 and y2
                        // Intersects at (hor_line1x, norm_line2y)
                    // Else
                        // does not intersect


                // If outside of x3 and x4
                // does not intersect



            // Check If rise2 (y4-y3) = 0
            // Check if the x of the horizontal line is inside of the normal line
            
            
                // If inside of x1 and x2
                    // hor_line2x = x3
                    // norm_line1y = m1 * (hor_line2x) + b1

                    // If norm_line1y inside of y3 and y4
                        // Intersects at (hor_line2x, norm_line1y)
                    // Else
                        // does not intersect

                // If outside of x1 and x2
                    // does not intersect


        // Parallel
            // If m1 = m2 && b1 = b2
                // Check if overlap
                // y3 between y1 and y2
                // y4 between y1 and y2
                // y1 between y3 and y4
                // y2 between y3 and y4

                // Intersects on one point (if x1 = x2 = x3 = x4)
                // y1 = y3
                // y2 = y3
                // y1 = y4
                // y2 = y4





        


        // Regular Cases

        // Derived from the Slop Form
        // Slopes (m)
        m1 = (y2-y1) / (x2-x1);
        m2 = (y4-y3) / (x4-x3);
        
        // B - value (b)
        b1 = y2 - (m1 * x2);
        b2 = y4 - (m2 * x4);

        a = (((-1 * b2) - (-1 * b1)) / ((m1 * -1) - (m2 * -1)));
        b = (((m2 * b1) - (m1 * b2)) / ((m1 * -1) - (m2 * -1)));



    }


    return 0;
}