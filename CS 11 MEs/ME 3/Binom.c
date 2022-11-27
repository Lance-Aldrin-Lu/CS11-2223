#include <stdio.h>

int main()
{


    int n;
    int a, b, c, d, e, f;
    int oa, ob, oc, od, oe, of;
    int co_x0, co_x1, co_x2, co_x3;
    int store_val[20][6];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

        store_val[i][0] = a;
        store_val[i][1] = b;
        store_val[i][2] = c;
        store_val[i][3] = d;
        store_val[i][4] = e;
        store_val[i][5] = f;
        
    }

    for(int i = 0; i < n; i++)
    {
        oa = store_val[i][0];
        ob = store_val[i][1];
        oc = store_val[i][2];
        od = store_val[i][3];
        oe = store_val[i][4];
        of = store_val[i][5];

        co_x3 = oe*oa*oc;
        co_x2 = of*oa*oc + oe*ob*oc + oe*oa*od;
        co_x1 = of*ob*oc + of*oa*od + oe*ob*od;
        co_x0 = of*ob*od;

        printf("%d %d %d %d\n", co_x3, co_x2, co_x1, co_x0);

    }

    return 0;

}