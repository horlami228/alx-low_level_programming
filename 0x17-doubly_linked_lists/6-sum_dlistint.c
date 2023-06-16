#include "lists.h"
/**
 * sum_dlistint - This function calculates the sum of the data in the list
 * @head: The head pointer
 * Return: returns sum if succesful
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)	/*list is empty*/
	{
		return (sum);
	}

	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
