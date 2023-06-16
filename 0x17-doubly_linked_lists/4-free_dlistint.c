#include "lists.h"
/**
 * free_dlistint - This function frees the memory allocated in a list
 * @head: The head pointer
 * Return: returns count if succesful
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
