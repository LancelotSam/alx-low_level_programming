#include  "main.h"
/**
 * *leet- this is the main function
 *
 * It encodes a string
 * @str:the string to be encoded
 * Return:encoded string
 */
char *leet(char *str)
{
	int i;
	int j;
	char s1[] = {"aAeEoOtTlL"};
	char s2[] = {"4433007711"};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
			}
		}
	}
	return (str);
}
