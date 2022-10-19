#include "main.h"
/**
  * _islower - tests if a letter is a
  *lower case letter from the english alphabet
  * @ c; character to test.
  * Return: 1 if lowercase letter, 0 else a lower case letter
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
