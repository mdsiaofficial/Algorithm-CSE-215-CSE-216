#include <stdio.h>

int main()

{

    int a[6], i, n, search;

    int found = 0;

    printf("Enter number of elements in a\n");

    scanf("%d", &n);

    printf("Enter %d integer(s)\n", n);

    for (i = 0; i < n; i++)

        scanf("%d", &a[i]);

    printf("Enter a number to search\n");

    scanf("%d", &search);

    for (i = 0; i < n; i++)

    {

        if (a[i] == search)

        {

            printf("Data Found in index: %d ", i);

            found++;

            break;
        }
    }

    if (found == 0)

        printf("Data not found");

    return 0;
}