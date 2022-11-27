#include <stdio.h>

int main()
{
    int n;
    int x1, x2, x3, x4, y1, y2, y3, y4;
    float u, t;

    int A, B, C, D, E, F;

    int tpx, tpy, upx, upy;
    int finalx, finaly;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

        A = x3 - x1;
        B = x4 - x3;
        C = y4 - y3;
        D = y3 - y1;
        E = x2 - x1;
        F = y2 - y1;

        if( ((E = 0) && (F = 0)) || ((B = 0)&&(C = 0))  )
        {
            printf("invalid input\n");
            continue;
        }

        else if( (A*C == D*B) && (E*C == F*B) )
        {
            printf("invalid input\n");
            continue;
        }

        else if( (A*C != D*B) && (E*C != F*B) )
        {
            printf("do not intersect\n");
            continue;
        }

        else
        {
            t = (A*C - D*B) / (E*C - F*B);
            u = (A*F - D*E) / (E*C - F*B);

            if((0 <= t) && (t <= 1) && (0 <= u) && (u <= 1))
            {
                tpx = x1 + t*(E);
                tpy = y1 + t*(F);
                upx = x3 + u*(B);
                upy = x4 + u*(C);

                finalx = tpx + tpy;
                finaly = upx + upy;

                printf("%d %d\n", finalx, finaly);
            }

            else
            {
                printf("do not intersect\n");
                continue;
            }

        }
    }


    return 0;
}