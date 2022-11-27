#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
            
        int x1,y1,x2,y2,x3,y3,x4,y4;
        float interX, interY, denominator, t, u;

        scanf("%d %d %d %d %d %d %d %d" , &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

        //for x invalid outputs
        if (((x1 == x2) && (y1 == y2))||((x3 == x4) && (y3 == y4)))
            {
                printf("invalid input\n");
            }
            else if (((x1 == x3) && (y1 == y3))||((x2 == x3) && (y2 == y3))){
                printf("invalid input\n");
            }
            else if (((x2 == x4) && (y2 == y4))||((x1 == x4) && (y1 == y4))){
                printf("invalid input\n");
            }

            //for y invalid outputs
            else if (((y2-y1)*(x3-x1)) == ((y3-y1)*(x2-x1)) && ((x3 < x1 || x3 < x2))){
                printf("invalid input\n");
            }
            else if (((y2-y1)*(x4-x1)) == ((y4-y1)*(x2-x1)) && ((x4 < x1 || x4 < x2))){
                printf("invalid input\n");
            }
            else 
            {
                t = ((x1 - x3) * (y3 - y4)) - ((y1 - y3) * (x3 - x4));
                u = ((x1 - x3) * (y1 - y2)) - ((y1 - y3) * (x1 - x2));
                denominator = ((x1 - x2) * (y3 - y4)) - ((y1 - y2) * (x3 - x4));

                if((denominator == 0) || (t/denominator < 0) || (t/denominator > 1) || (u/denominator < 0) || (u/denominator > 1)){
                    printf("do not intersect\n");
                }
                else if((0 <= t/denominator) && (t/denominator <= 1)){
                    interX = (x1+ ((t/denominator) * (x2 - x1)));
                    interY = (y1+ ((t/denominator) * (y2 - y1)));
                    printf("%.0f %.0f \n", interX, interY);
                }
            }
        
       
    }
   return 0;
}
