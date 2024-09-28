#include <math.h>

int fang_1(void)
{
    int age;
    printf("Input age to convert to second\n");
    scanf("%d",&age);
    const double n=3.156*pow(10,7);
    printf("%f\n",age*n);
    return 0;
}
