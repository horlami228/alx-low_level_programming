#include "lists.h"
/**
 * add_dnodeint - This function prints out the data in a list
 * @head: The head pointer
 * @n: data in the node
 * Return: returns a new_node if succesful
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

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

	/*if the list is not empty*/
	else
	{
		new_node->next = *head;
		new_node->prev = NULL;
		new_node->n = n;
		(*head)->prev = new_node;
		*head = new_node;
	}

	return (new_node);
}
