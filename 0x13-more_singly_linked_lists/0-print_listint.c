#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * countlist: my used variable for list
 * Return: number of nodes (0)
 */
size_t print_listint(const listint_t *h)
{
size_t countlist = 0;

while (h != NULL)
{
printf("%d\n", h->n);
countlist++;
h = h->next;
}

return (countlist);
}
