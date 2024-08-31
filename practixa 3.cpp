#include <stdio.h>
#include <math.h>

int main()
{
    double x, fx;

    printf("Enter a value for x: ");
    scanf("%lf", &x);

    fx = atan(x) - 2 * x + 1;

    printf("f(x) = arctan(x) - 2x + 1 = %.2lf\n", fx);

    return 0;
}
