#include "main.h"
  
 /**
  * _strstr - finds the first occurrence of the substring.
  * needle in the string haystack.
  * @haystack: entire string.
  * @needle: substring.
  * Return: pointer to the beginning of located substring or
  * Null if the substring is not found. l
  */
 
char *_strstr(char *haystack, char *needle)
{
        char *bhayst;
        char *pneed;

         while (*haystack != '\0')
         {
                 bhayst = haystack;
                 pneed = needle;
                 while (*haystack != '\0' && *pneed != '\0' && *haystack == *pneed)
                 {
                         haystack++;
                         pneed++;
                 }
                 if  (!*pneed)
                         return (bhayst);
                 haystack = bhayst + 1;
         }
         return (0);
}
