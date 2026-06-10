#include <stdio.h>
#include "calc.h"

int main(void)
{
    int a = 10;
    int b = 3;
    int result;

    result = add(a, b);
    printf("add(%d, %d) = %d\n", a, b, result);

    result = subtract(a, b);
    printf("subtract(%d, %d) = %d\n", a, b, result);

    result = factorial(5);
    printf("factorial(5) = %d\n", result);

    return 0;
}
