#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Use a for loop to print the numbers from 1 to n
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
