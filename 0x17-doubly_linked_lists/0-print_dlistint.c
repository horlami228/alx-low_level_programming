#include "lists.h"
/**
 * print_dlistint - This function prints out the data in a list
 * @h: The head pointer
 * Return: returns count if succesful
*/


size_t print_dlistint(const dlistint_t *h)
{
    /* create a temporary variable */
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL) /* Traverse through the list */
{
	printf("%d\n", temp->n);
	temp = temp->next;
	count++;
}

	return (count);

}
