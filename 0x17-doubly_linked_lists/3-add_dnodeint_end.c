#include "lists.h"
/**
 * add_dnodeint_end - This function prints out the data in a list
 * @head: The head pointer
 * @n: data in the node
 * Return: returns a newnode if succesful
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
		/*Create a new node*/
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

		/*Check if the list is empty*/
	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/*if it is not empty*/
	dlistint_t *temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;
	new_node->n = n;

	return (new_node);

}
