#include "lists.h"

/**
 * sum_listint - cal d sum of all data in a listint_t list of C program
 * @head: first node in the linked list
 * author hustrub
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current)
{
sum += current->data;
current = current->next;
}

return (sum);
}

