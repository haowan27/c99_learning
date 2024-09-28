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

// 这是一个求两数之和函数
int sum(int a,int b) {
    return a+b;
}
// 这是两数求大数的函数
int max(int f,int c) {
    if(f>c)
        return 1;
    else if(f==c)
            return 0;
        else
            return -1;
}