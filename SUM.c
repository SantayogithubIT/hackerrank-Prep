#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    printf("Enter two integer numbers:",&a,&b);
    scanf("%d %d",&a,&b);
    printf("Enter two float numbers:",&c,&d);
    scanf("%f%f", &c,&d);
    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f", c+d,  c-d);
     return 0;
}