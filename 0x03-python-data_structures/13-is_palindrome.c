#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to head of list
 * Return: number of nodes
 */
int is_palindrome(listint_t **head)
{
	while (head != '\0')
	{
		len++;
	}
	if (len == 0)
	{
		return (1);
	}
	for (i = 0; i < len; i++)
	{
		for (j = len; j > 0; j--)
		{
			if (i == j)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
	}
}
