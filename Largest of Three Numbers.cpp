#include <stdio.h>

int main()
{

    double a, b,c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a>= b && a>= c)
    {
        printf("%.2f largest", a);
    }

    if (b>= a && b>=c)
    {
        printf("%.2f largest",b);

    }


    if (c >= a &&c >= b)
    {
        printf("%.2f largest", c);
    }

    return 0;
}
