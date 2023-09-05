#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	int s1Len = 0, s2Len = 0, i;
	char *concatOut;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1Len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2Len++;
	concatOut = malloc(sizeof(char) * (s1Len + s2Len) + 1);
	if (concatOut == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concatOut = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		concatOut[s1Len + i] = s2[i];
	return (concatOut);
}
