#include <stdio.h>

int main(){

// double é mais preciso que o float --> &lf
double raio, area;
double pi = 3.14159;


scanf("%lf", &raio);
// .10 -->somente terá 4 casas decimais


printf("A=%.4lf\n", area = pi * raio * raio);

return 0;

}