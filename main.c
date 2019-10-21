#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    float x;    //taban
    float y;    //us
    float h;    //usun diger kýsmý dediðimizde örnek:us=2.3 y=2 h=0.3
    printf("tabani gir\n");
    scanf("%f",&x);
    printf("us gir\n");
    scanf("%f",&y);
    printf("usun diger kismi gir\n");
    scanf("%f",&h);
    float sonuc=pow(x,y)+(pow(x,y)*log(x))*h;
    printf("%f\n",sonuc);
    return 0;

}
