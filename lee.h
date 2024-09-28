int lee_1(){
    double pint =0,cup = 0,ounce = 0,soupspoon = 0,teaspoon = 0;
    printf("Pls input cup amounts: \n");
    fflush(stdout);
    scanf("%lf",&cup);


    pint = 2.0 * cup;
    ounce = 8.0 * cup;
    soupspoon= 2.0 * ounce;
    teaspoon= 3.0 * soupspoon;

    printf("%.0lfcup=%.2lfpint\n", cup, pint);
    printf("%.2lf pint=%.2lfounce\n", pint, ounce);
    printf("%.2lf ounce=%.2lfsoupspoon\n", ounce, soupspoon);
    printf("%.2lf soupspoon=%.2lfteaspoon\n", soupspoon, teaspoon);
}