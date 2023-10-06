#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print values of c from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int c = 0;
    
    for (; c < 10; ) // Add the initialization part as well
    {
        printf("%i", c);
        c++;
    }
    printf("\n");

    return (0);
}

