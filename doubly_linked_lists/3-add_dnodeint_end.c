#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end -  returns the length of a string
 *@head : head
 *@n: const int
 *
 * Return: Always 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) 
{ 
    dlistint_t *addNode = malloc(sizeof(dlistint_t));
    dlistint_t *addNode;
    dlistint_t *reco;
    if (addNode == NULL) 
	{
        return NULL;
    	}

    reco = head;

    addNode->n = n;
    addNode->next = NULL;

    if (*head == NULL) 
	{
        addNode->prev = NULL;
        *head = addNode;
        return addNode;
    	}

    while (reco->next != NULL) 
	{
        reco = reco->next;
    	}

    reco->next = addNode;
    addNode->prev = reco;

    return addNode;
}
