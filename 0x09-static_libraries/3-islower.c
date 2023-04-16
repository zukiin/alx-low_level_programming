/*
 * File: 3-islower.c
 * Author: Zuki Nkalitshana
 */

#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: single letter input
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
