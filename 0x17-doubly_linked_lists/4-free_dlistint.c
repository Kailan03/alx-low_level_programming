#include "lists.h"
#include <stdlib.h>

/* Function to free a dlistint_t list */
void free_dlistint(dlistint_t *head) {
    dlistint_t *current;

    /* Traverse the list and free each node */
    while (head != NULL) {
        current = head;
        head = head->next;
        free(current);
    }
}
