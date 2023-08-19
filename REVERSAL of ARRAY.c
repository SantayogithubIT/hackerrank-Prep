#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    printf("Enter the elemennts");
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
     for(i =n-1; i >=0; i--)
        printf(" %d", arr[i]);
    return 0;
}
