#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index
 * @n: data to insert
 * Return: pointer or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *x;
listint_t *temp = *head;

x = malloc(sizeof(listint_t));
if (!x || !head)
return (NULL);
x->n = n;
x->next = NULL;
if (idx == 0)
{
x->next = *head;
*head = x;
return (x);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
x->next = temp->next;
temp->next = x;
return (x);
}
else
temp = temp->next;
}
return (NULL);
}
