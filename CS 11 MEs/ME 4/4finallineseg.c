#include <stdio.h>

int main() 
{
    // Variable Initialization
    int n;
    int x1, x2, x3, x4, y1, y2, y3, y4;
    float Tnum, Unum, denm; 
    float Tdeter, Udeter; 
    float xfinal, yfinal; 
    
    // Get the number of sets
    scanf("%d", &n);
    

    for(int i = 0; i < n; i++)
    {
        // Get the eight points
        scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        
        // Special Case: Zeroes of dY and dX
        if (((x3 - x1) * (y2 - y1)) == ((x2 - x1) * (y3 - y1)) ||
            ((x4 - x1) * (y2 - y1)) == ((x2 - x1) * (y4 - y1)))
        {
            printf("invalid input\n");
            continue;
        }

        // Special Case: Point of line segment between a line segment
        if((x1 == x3 && y1 == y3) ||
            (x4 == x1 && y4 == y1) || 
            (x2 == x4 && y2 == y4) || 
            (x3 == x2 && y3 == y2))
        {
            printf("invalid input\n");
            continue;
        }

        // Special Case: (At least one) Pair of Points does NOT form a line segment
        else if(((x1 - x2 == 0) && (y1 - y2 == 0)) || 
                ((x3 - x4 == 0) && (y3 - y4 == 0)))
        {
            printf("invalid input\n");
            continue;
        }

        // Regular Cases
        // Proceed with Determinants
        else
        {
            Tnum = ((x1 - x3)*(y3 - y4) - (y1 - y3)*(x3 - x4));
            Unum = ((x1 - x3)*(y1 - y2) - (y1 - y3)*(x1 - x2));
            denm = ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4));

            Tdeter = Tnum / denm;
            Udeter = Unum / denm;
        }

        // Cases where NOT possible
        
        // Indeterminate form (M/0)
        if (denm == 0)
        {
            printf("do not intersect\n");
            continue;
        }
        
        // Case where the values INSIDE the parameters of validity
        else if ((0 <= Tdeter && Tdeter <= 1) && (0 <= Udeter && Udeter <= 1))
        {
            xfinal = x1 + (Tdeter * (x2 - x1));
            yfinal = y1 + (Tdeter * (y2 - y1));
            
            printf("%.0f %.0f\n", xfinal, yfinal);
        }
        
        // Case where the values OUTSIDE the parameters of validity
        else
        {
            printf("do not intersect\n");
            continue;
        }

    }


    return 0;
}