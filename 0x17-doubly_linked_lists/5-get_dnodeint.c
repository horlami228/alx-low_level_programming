#include "lists.h"
/**
 * get_dnodeint_at_index - This function prints out the data in a list
 * @head: The head pointer
 * @index: index of the node
 * Return: returns found node if succesful
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}

	if (index == 0)
	{
		return (head);
	}

	else
	{
		dlistint_t *temp = head;

		while (index > 0)
		{
			if (temp == NULL)
			{
				return (NULL);
			}

			temp = temp->next;
			index--;
		}




		return (temp);

	}
}
