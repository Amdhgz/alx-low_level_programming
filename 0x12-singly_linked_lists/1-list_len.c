#include "lists.h"

/**
 * list_len - finds elements numbers in a linked list
 *@h: pointer to the list
 *
 *Return: Elements numbers
*/

size_t list_len(const list_t *h)
	{
		size_t elements = 0;

		while (h)
		{
			elements++;
			h = h->next;
		}

		return (elements);
	}
