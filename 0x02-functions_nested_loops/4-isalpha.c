#include "main.h"
/**
 * _isalpha - tests if a character is from the English alphabet
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
		return (1);
	else
		return (0);
}
