#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0;
	printf("Enter the number of elements:");
    scanf("%d", &n);
    int*arr= (int*)malloc(n*sizeof (int));
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }    
    printf("%d",sum);
    return 0;
}
