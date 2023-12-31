/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b
 * @s: Pointer to the memory area
 * @b: Constant byte to be filled
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        s[i] = b;
    return (s);
}

