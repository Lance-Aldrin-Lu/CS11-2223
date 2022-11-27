#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    int n;
    int x1, x2, x3, x4, y1, y2, y3, y4;
    float Tnum; 
    float Unum; 
    float pperoex; 
    float pperowhy;
    float denm;

    float Tdeter, Udeter;

    
    scanf("%d", &n);
    

    for(int i=0; i<n; i++){
        scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);


        if ((y2 == y1 && x2 == x1) || (x4 == x3 && y4 == y3))
        {
            printf("invalid input\n");
            continue;
        }
        
        if (((x1 == x3 && y1 == y3) || (x4 == x1 && y4 == y1) || (x2 == x4 && y2 == y4) || (x3 == x2 && y3 == y2)))
        {
            printf("invalid input\n");
            continue;
        }

        if (((x3 - x1) * (y2 - y1)) == ((y3 - y1) * (x2 - x1)) && ((x2 > x3) || (x1 > x3)))
        {
            printf("invalid input\n");
            continue;
        }

        if (((x4 - x1) * (y2 - y1)) == ((y4 - y1) * (x2 - x1)) && ((x2 > x4) || (x1 > x4)))
        {
            printf("invalid input\n");
            continue;
        }


        else
        {
            Tnum = ((x1 - x3)*(y3 - y4) - (y1 - y3)*(x3 - x4));
            Unum = ((x1 - x3)*(y1 - y2) - (y1 - y3)*(x1 - x2));
            denm = ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4));

            Tdeter = Tnum / denm;
            Udeter = Unum / denm;
        }


        if (denm == 0 || Tdeter < 0)
        {
            printf("do not intersect\n");
            continue;
        }
        if (Tdeter > 1 || Udeter < 0 || Udeter > 1)
        {
            printf("do not intersect\n");
            continue;
        }

        if (0 <= Tdeter && Tdeter <= 1)
        {
                pperoex = ((x1) + ((Tdeter) * (x2 - x1)));
                pperowhy = ((y1) + ((Tdeter) * (y2 - y1)));

                printf("%.0f %.0f\n", pperoex, pperowhy);
        }

        

    }

    return 0;
}