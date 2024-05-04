#include <stdio.h>

int sum(int a, int b);
int dif(int a, int b);
int mult(int a, int b);
int div(int a, int b);

int main()
{
    double x, y;
    if (!scanf("%lf  %lf", &x, &y)){
        printf("n/a\n");
        return (-1);
    }
    if ((int)x != x || (int)y != y){
        printf("n/a\n");
        return (-1);
    }
    if (y == 0)
        printf("%d %d %d n/a\n", sum(x, y), dif(x, y), mult(x, y));
    else
        printf("%d %d %d %d\n", sum(x, y), dif(x, y), mult(x, y), div(x, y));
    return (0);
}

int sum(int a, int b){
    return (a + b);
}

int dif(int a, int b){
    return (a - b);
}

int div(int a, int b){
    return (a / b);
}

int mult(int a, int b){
    return (a * b);
}