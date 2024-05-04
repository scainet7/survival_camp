#include <stdio.h>

int max(int a, int b);

int main()
{
    double x, y;
    if (!scanf("%lf  %lf", &x, &y)){
        printf("n/a\n");
        return (-1);
    }
    if (((int) x != x) || ((int) y != y)){
        printf("n/a\n");
        return (-1);
    }
    printf("%d\n", max(x, y));
    return (0);
}

int max(int a, int b)
{
    if (a > b)
        return (a);
    else
        return (b);
}