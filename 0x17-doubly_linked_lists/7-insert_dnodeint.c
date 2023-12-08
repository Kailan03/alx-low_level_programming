#include "lists.h"
#include <stdlib.h>

/* Function to insert a new node at a given position in a dlistint_t list */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	unsigned int count;
    /* Allocate memory for the new node */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    
    if (new_node == NULL) {
        return (NULL);  /* Return NULL if malloc fails */
    }

    /* Initialize the new node */
    new_node->n = n;

    /* If index is 0, insert at the beginning of the list */
    if (idx == 0) {
        new_node->prev = NULL;
        new_node->next = *h;

        /* Update the previous of the current head if the list is not empty */
        if (*h != NULL) {
            (*h)->prev = new_node;
        }

        /* Update the head to point to the new node */
        *h = new_node;
        return (new_node);
    }

    /* Traverse to the specified index */
    current = *h;
    count = 0;

    while (current != NULL && count < idx - 1) {
        current = current->next;
        count++;
    }

    /* If index is out of bounds, free the new node and return NULL */
    if (current == NULL) {
        free(new_node);
        return (NULL);
    }

    /* Insert the new node between current and the next node */
    new_node->prev = current;
    new_node->next = current->next;

    if (current->next != NULL) {
        current->next->prev = new_node;
    }

    current->next = new_node;

    return (new_node);
}
