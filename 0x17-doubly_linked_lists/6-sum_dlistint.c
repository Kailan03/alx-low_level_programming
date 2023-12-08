#include "lists.h"

/* Function to return the sum of all the data (n) in a dlistint_t list */
int sum_dlistint(dlistint_t *head) {
    int sum = 0;

    /* Traverse the list and accumulate the sum */
    while (head != NULL) {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}
