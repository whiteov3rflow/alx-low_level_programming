/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string containing the bytes to search for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    char *p;
    while (*s)
    {
        for (p = accept; *p; p++)
        {
            if (*s == *p)
            {
                return s;
            }
        }
        s++;
    }
    return (0);
}

