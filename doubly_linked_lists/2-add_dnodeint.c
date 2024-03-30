#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint -  returns the length of a string
 *@s : char
 *
 * Return: Always 0.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

        dlistint_t *addNode = malloc(sizeof(dlistint_t));

        if (addNode == NULL)
                return (NULL);

        addNode->n = n;
        addNode->prev = NULL;
	addNode->next = *head;

	 if (*head != NULL) 
	{
        (*head)->prev = addNode;
    	}

        *head = addNode;

        return (addNode);
	
}
