#include "lists.h"
#include <stdlib.h>

/* Function to add a new node at the end of a dlistint_t list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) {
    /* Allocate memory for the new node */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL) {
        return (NULL);  /* Return NULL if malloc fails */
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL) {
        new_node->prev = NULL;
        *head = new_node;
    } else {
        dlistint_t *current = *head;

        /* Traverse to the end of the list */
        while (current->next != NULL) {
            current = current->next;
        }

        /* Connect the new node to the end of the list */
        new_node->prev = current;
        current->next = new_node;
    }

    return (new_node);
}
