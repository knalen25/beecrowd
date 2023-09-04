#include <stdio.h>

int main(){
    int x;
    double y, z;

    scanf("%d",&x);
    scanf("%lf",&y);
    scanf("%lf",&z);

    z = x/y;

     // somente 3 casas
    printf("%.3f km/l\n", z);



    return 0;
}