#include "lists.h"
#include <stddef.h>

/* Function to return the nth node of a dlistint_t list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
    unsigned int count = 0;

    /* Traverse the list to the specified index */
    while (head != NULL && count < index) {
        head = head->next;
        count++;
    }

    /* Return the node at the specified index (or NULL if not found) */
    return (head);
}
