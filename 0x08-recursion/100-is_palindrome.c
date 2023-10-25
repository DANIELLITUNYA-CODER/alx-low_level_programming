#include "main.h"

int palindrome_check(char *s, int len, int i);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = 0;
    while (s[len] != '\0') /* Calculate the length of the string */
        len++;
    if (len <= 1) /* Base case - an empty string or single character is a palindrome */
        return 1;
    return (palindrome_check(s, len, 0)); /* Call the helper function */
}

/**
 * palindrome_check - Helper function to check if a string is a palindrome
 * @s: The string to be checked
 * @len: The length of the string
 * @i: The current index to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int palindrome_check(char *s, int len, int i)
{
    if (i >= len) /* Base case - if all characters are checked */
        return 1;
    if (s[i] == s[len - 1 - i]) /* Check if the characters at symmetrical positions are equal */
        return palindrome_check(s, len, i + 1); /* Recur with the next index */
    else
        return 0;
}
