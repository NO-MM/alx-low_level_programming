#include "main.h"
/**
 **_strcpy - This function copies the string pointer to by src
 *@str copies string pointed to by src
 *@src: char type string
 *@dest: char type string
 *Description: copy the string pointed to by 'src'
 *to the buffer pointed to by 'dest'
 *return: pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
