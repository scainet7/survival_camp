#include <stdio.h>

int main()
{
    double x = 0, y = 0;
    if (!scanf("%lf %lf", &x, &y)){
        printf("n/a\n");
        return (-1);
    }
    if ((x * x + y * y) < 25){
        printf("GOTCHA\n");
    }
    else 
        printf("MISS\n");
    return (0);
}