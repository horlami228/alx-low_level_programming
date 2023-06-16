#include "lists.h"
/**
 * delete_dnodeint_at_index - This function inserts a node at a given index
 * @head: The head pointer
 * @index: index of the selected node
 * Return: returns 1 if succesful. -1 for otherwise
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	temp->prev->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);

	return (1);
}
