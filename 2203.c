#include <stdio.h>

int main()
{
    double x1, y1, x2, y2, v, r1, r2, X, Y, distence, range;
    while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
    {
        scanf("%lf%lf%lf", &v, &r1, &r2);
        X = (x2-x1)*(x2-x1);
        Y = (y2-y1)*(y2-y1);
        distence = sqrt(X+Y);
        distence += v*1.50;
        range = r1+r2;
        if(distence > range)
        {
            printf("N\n");
        }

        else
        {
            printf("Y\n");
        }
    }
    return 0;
}

