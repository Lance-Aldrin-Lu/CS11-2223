#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    int n;
    int x1, x2, x3, x4, y1, y2, y3, y4;
    float tmoment; 
    float umoment; 
    float pperoex; 
    float pperowhy;
    float constantnitumoment;

    int A, B, C, D, E, F;

    
    scanf("%d", &n);
    

    for(int i=0; i<n; i++){
        scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

        A = x1 - x3;
        B = y1 - y3;
        C = y3 - y4;
        D = x3 - x4;
        E = y1 - y2;
        F = x1 - x2;


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
            tmoment = ((x1 - x3)*(y3 - y4) - (y1 - y3)*(x3 - x4));
            umoment = ((x1 - x3)*(y1 - y2) - (y1 - y3)*(x1 - x2));
            constantnitumoment = ((x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4));
        }

        // t = (x1 - x3)*(y3 - y4) - (y1 - y3)*(x3 - x4) / (x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4)
        // u = (x1 - x3)*(y1 - y2) - (y1 - y3)*(x1 - x2) / (x1 - x2)*(y3 - y4) - (y1 - y2)*(x3 - x4)

        // t = A*C - B*D / F*C - E*D
        // u = A*E - B*F / F*C - E*D

        // denom = F*C - E*D

        if (constantnitumoment == 0 || tmoment / constantnitumoment < 0)
        {
            printf("do not intersect\n");
            continue;
        }
        if (tmoment / constantnitumoment > 1 || umoment / constantnitumoment < 0 || umoment / constantnitumoment > 1)
        {
            printf("do not intersect\n");
            continue;
        }

        if (0 <= tmoment / constantnitumoment && tmoment / constantnitumoment <= 1)
        {
                pperoex = ((x1) + ((tmoment / constantnitumoment) * (x2 - x1)));
                pperowhy = ((y1) + ((tmoment / constantnitumoment) * (y2 - y1)));

                printf("%.0f %.0f\n", pperoex, pperowhy);
        }

        

    }

    return 0;
}