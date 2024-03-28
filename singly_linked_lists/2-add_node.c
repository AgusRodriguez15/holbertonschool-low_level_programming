#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_t *add_node - check the codei
 * @head: head
 * @str: str
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addNode = (list_t *)malloc(sizeof(list_t));

	if (addNode == NULL)
		return (NULL);

	addNode->str = strdup(str);

	if (addNode->str == NULL)
		return (NULL);

	addNode->len = strlen(str);
	addNode->next = *head;

	*head = addNode;

	return (addNode);
}
