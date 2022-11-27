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

        if ((x1 == x2 && y1 == y2) || (x3 == x4 && y3 == y4))
        {
            printf("invalid input\n");
        }

        else if ((x1 == x3 && y1 == y3) || (x2 == x3 && y2 == y3) || (x2 == x4 && y2 == y4) || (x1 == x4 && y1 == y4))
        {
            printf("invalid input\n");
        }

        else if ((y2 - y1)*(x3 - x1) == (y3 - y1)*(x2 - x1) && (x3 < x2 || x3 < x1))
        {
            printf("invalid input\n");
        }

        else if ((y2 - y1)*(x4 - x1) == (y4 - y1)*(x2 - x1) && (x4 < x2 || x4 < x1))
        {
            printf("invalid input\n");
        }

        else if (x4 == x3 && x2 == x1)
        {
            printf("do not intersect\n");
        }
    }


    return 0;
}