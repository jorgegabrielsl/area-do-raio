#include <stdio.h>
#include <math.h>

int main()
{

    float raio, n,area;

     n=3.14159;

    printf("digite o valor do raio: ");
        scanf("%f",&raio);
           
        area = n * pow(raio,2);
     

    printf("o valor da area e de: %0.4f ",area);
    
    return 0;

}
