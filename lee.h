#include <stdio.h>
#include <string.h>

int lee_1(){
    double pint =0,cup = 0,ounce = 0,soupspoon = 0,teaspoon = 0;
    printf("Pls input cup amounts: \n");
    fflush(stdout);
    scanf("%lf",&cup);

    //加了一行注释
    pint = 2.0 * cup;
    ounce = 8.0 * cup;
    soupspoon= 2.0 * ounce;
    teaspoon= 3.0 * soupspoon;

    printf("%.0lfcup=%.2lfpint\n", cup, pint);
    printf("%.2lf pint=%.2lfounce\n", pint, ounce);
    printf("%.2lf ounce=%.2lfsoupspoon\n", ounce, soupspoon);
    printf("%.2lf soupspoon=%.2lfteaspoon\n", soupspoon, teaspoon);
}

    int diff(int a, int b) {
    return a - b;
}


int lee_2() {
    int num, a, isPrime=1;
    printf("Pls input num: \n");
    scanf("%d",&num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (a = 2; a <= num/2 ; a++) {//这个我搜了一下怎么处理这个循环，问的gpt
        if (num % a== 0) {
            isPrime=0;
            break;
          }
        }
    }

    if (isPrime == 1) {
        printf("%d is Prime\n",num);
    }else{
    printf("%d is not Prime\n",num);
}
return 0;


}

int lee_3() {
    char a[100],b[100];

    printf("Pls input your first name: \n");
    scanf("%s",a);
    printf("Pls input your last name: \n");
    scanf("%s",b);


    int alen = strlen(a);
    int blen = strlen(b);
    printf("%s %s \n",a,b);
    printf("%*d %*d\n", alen, alen, blen, blen);
    return 0;
}