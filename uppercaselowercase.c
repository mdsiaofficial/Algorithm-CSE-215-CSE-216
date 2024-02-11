#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        // Check if the character is uppercase or lowercase using ASCII values
        if (ch >= 'A' && ch <= 'Z')
        {
            printf("%c is an uppercase letter.\n", ch);
        }
        else
        {
            printf("%c is a lowercase letter.\n", ch);
        }
    }
    else
    {
        printf("%c is not an alphabet.\n", ch);
    }
    return 0;
}
