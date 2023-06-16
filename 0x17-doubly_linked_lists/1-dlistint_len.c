#include "lists.h"
/**
 * dlistint_len - This function prints out the data in a list
 * @h: The head pointer
 * Return: returns count if succesful
*/


size_t dlistint_len(const dlistint_t *h)
{
    /* create a temporary variable */
	const dlistint_t *temp = h;
	int count = 0;

while (temp != NULL) /* Traverse through the list */
{

	temp = temp->next;
	count++;
}

	return (count);

}
