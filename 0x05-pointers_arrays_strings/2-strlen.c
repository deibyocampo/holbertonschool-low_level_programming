#include "holberton.h"
/**
 * _strlen - count every memory space in the arrray.
 *
 * 
 *
 */
int _strlen(char *s)
{
  int len;
  len = 0;
  while (s[len] != '\0')
    {
      len++;
     }
  return (len);
}
