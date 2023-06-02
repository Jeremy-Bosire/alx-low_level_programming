#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @mum: String variable
 * Return: The resultant string
 */
char *cap_string(char *mum)
{
	int i, change, mum_length;
	char special[] = " \t\n,;.!?\"(){}";
	int j;

	i = 0;
	change = 0;
	mum_length = 0;
	while (mum[mum_length] != '\0')
	{
		mum_length++;
	}
	while (i < mum_length)
	{
		for (j = 0; special[j] != '\0'; j++)
		{
			if (mum[i - 1] == special[j] && (mum[i] >= 'a' && mum[i] <= 'z'))
			{
				change = mum[i] - 32;
				mum[i] = change;
			}
		}
		i++;
	}
	return (mum);
}

