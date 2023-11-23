#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 * Description: this is good
 * Return: the resulting string;
 */
char *_strcat(char *s)
{
for (int i = 0 ; s[i] != '\0' ; i++)
{
if (s[i] == 'a' || s[i] == 'A')
s[i] = '4';
else if (s[i] == 'e' || s[i] == 'E')
s[i] = '3';
else if (s[i] == 'o' || s[i] == 'O')
s[i] = '0';
else if (s[i] == 't' || s[i] == 'T')
s[i] = '7';
else if (s[i] == 'l' || s[i] == 'L')
s[i] = '1';
}
return (s);
}
