#include <stdio.h>
#include <math.h>

double fun(double x);

int main()
{
    double x;
    if (!scanf("%lf", &x)){
        printf("n/a\n");
        return (-1);
    }
    printf("%.1f\n", fun(x));
    return (0);
}

double fun(double x)
{
   return (7e-3 * pow(x, 4) + ((22.8 * pow(x, 1/3)  - 1e3) * x + 3) / (x * x / 2) - x * pow(10 + x, 2/x) - 1.01);
}