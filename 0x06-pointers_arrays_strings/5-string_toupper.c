#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @mum: A string variable I came up with
 * Return: The resultant string
 */
char *string_toupper(char *mum)
{
	int i, change, mum_length;

	i = 0;
	change = 0;
	mum_length = 0;
	while (mum[mum_length] != '\0')
	{
		mum_length++;
	}
	while (i < mum_length)
	{
		if (mum[i] >= 'a' && mum[i] <= 'z')
		{
			change = mum[i] - 32;
			mum[i] = change;
		}
		i++;
	}
	return (mum);
}
