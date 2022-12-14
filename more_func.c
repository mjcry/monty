#include "monty.h"

/**
 * add_dnodeint - adds a new node at the beginning of a stack_t list
 * @head: pointer to the adress of the head of the list
 * @n : element to add
 * Return: adress of the new element, or NULL if it failed
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}

/**
 * free_dlistint - free a listint
 * @head: pointer to the head of the list
 */

void free_dlistint(stack_t *head)
{
	stack_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}

}


/**
 * isnumber - checks if the string is a integer or not
 * @arg: string to check
 *
 * Return: 1 if yes, 0 if no
 */

int isnumber(char *arg)
{
	unsigned int i = 0;

	if (arg == NULL)
		return (0);

	while (arg[i])
	{
		if (arg[i] == '-')
		{
			i++;
			continue;
		}
		if (!isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}
