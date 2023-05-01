#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *x = NULL;
listint_t *y = NULL;

while (*head)
{
x = (*head)->x;
(*head)->x = y;
y = *head;
*head = x;
}
*head = y;
return (*head);
}
