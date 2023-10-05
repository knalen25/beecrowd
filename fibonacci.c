#include <stdio.h>

int main()
{
    unsigned long long int Fib[61];
    int pos, numEntradas;

    Fib[0] = 0;
    Fib[1]=1;
    for (int i = 2; i < 61; i++)
    {
        Fib[i] = Fib[i -1] + Fib[i -2]; 
    }
    
    scanf("%d", &numEntradas);
    for (int i = 0; i < numEntradas; i++)
    {
        scanf("%d", &pos);
        printf("Fib(%d) = %lld\n", pos, Fib[pos]);
        
    }
    
    
    
    return 0;
}
