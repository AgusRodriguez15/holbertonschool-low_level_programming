#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *_strlen -  returns the length of a string
 *@s : char
 *
 * Return: Always 0.
 */

int _strlen(const char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
        i++;
        }
        return (i);
}
/**
 * list_t *add_node_end - check the codei
 * @head: head
 * @str: str
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
        list_t *addNode = (list_t *)malloc(sizeof(list_t));

        if (addNode == NULL)
                return (NULL);

        addNode->str = strdup(str);

        if (addNode->str == NULL)
        {
                free(addNode);
                return (NULL);
        }

        addNode->len = _strlen(str);
        addNode->next = NULL;

        if (*head != NULL)
	{
		list_t *ulNode = *head;
		while (ulNode->next != NULL)
		{
			ulNode = ulNode->next;
		}
		ulNode->next = addNode;
	} else {
		*head = addNode;
	}
	return (addNode);
}

