#include "lists.h"



/**
* check_cycle - check if a linked list is a cycle.
* @list: check linked list
*
* return: return 1 if successful and 0 if it fails.
*/

int check_cycle(listint_t *list)
{
	listint_t *fast = list; 
	listint_t *slow = list;

	if (list == NULL || list->next == NULL)
	return (0);


	while (slow != NULL && fast != NULL && fast->next != NULL)
{
	slow = slow->next;
	fast = fast->next->next;
	if (slow == fast)
	{	
	return (1);
	}

}
	return (0);
}
