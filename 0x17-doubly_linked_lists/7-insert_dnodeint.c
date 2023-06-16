#include "lists.h"
/**
 * insert_dnodeint_at_index - This function inserts a node at a given index
 * @h: The head pointer
 * @idx: index to insert the node
 * @n: node data
 * Return: returns a newnode if succesful
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
		/*Create a new node*/
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*h == NULL)
	{
		return (NULL); /*List is empty*/
	}
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		new_node->n = n;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	dlistint_t *temp = *h; /*temp variable for traversing*/

	while (temp != NULL && idx > 0)
	{
		temp = temp->next;
		idx--;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	new_node->next = temp;
	new_node->prev = temp->prev;
	temp->prev->next = new_node;
	temp->prev = new_node;
	new_node->n = n;
	return (new_node);
}
