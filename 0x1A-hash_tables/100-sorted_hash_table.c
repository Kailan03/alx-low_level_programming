#include "shash_table.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: Size of the array.
 * Return: A pointer to the newly created hash table, or NULL for error.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *new_table;
    unsigned long int i;

    new_table = malloc(sizeof(shash_table_t));
    if (new_table == NULL)
        return (NULL);

    new_table->size = size;
    new_table->array = malloc(sizeof(shash_node_t *) * size);
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        new_table->array[i] = NULL;

    new_table->shead = NULL;
    new_table->stail = NULL;

    return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The hash table.
 * @key: The key string. Key cannot be an empty string.
 * @value: The value associated with the key. Value must be duplicated.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    index = key_index((unsigned char *)key, ht->size);
    current = ht->array[index];

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            /* Update existing key */
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return (0);
            return (1);
        }
        current = current->next;
    }

    /* Add new key */
    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    /* Insert into sorted linked list */
    if (shash_table_insert_sorted(ht, new_node) == NULL)
    {
        /* Undo the insertion if there's an error */
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table.
 * @key: The key string.
 * Return: The value associated with the element, or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *current;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    current = ht->shead;
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->snext;
    }

    return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table.
 * @ht: The hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    current = ht->shead;
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        if (current->snext != NULL)
            printf(", ");
        else
            printf("\n");
        current = current->snext;
    }
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order.
 * @ht: The hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    current = ht->stail;
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        if (current->sprev != NULL)
            printf(", ");
        else
            printf("\n");
        current =
        current = current->sprev;
    }
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *current, *next;

    if (ht == NULL)
        return;

    for (current = ht->shead; current != NULL; current = next)
    {
        next = current->snext;
        free(current->key);
        free(current->value);
        free(current);
    }

    free(ht->array);
    free(ht);
}

/**
 * shash_table_insert_sorted - Inserts a node into the sorted linked list.
 * @ht: The hash table.
 * @new_node: The new node to be inserted.
 * Return: The head of the sorted linked list.
 */
shash_node_t *shash_table_insert_sorted(shash_table_t *ht, shash_node_t *new_node)
{
    shash_node_t *current, *prev;

    if (ht == NULL || new_node == NULL)
        return (NULL);

    current = ht->shead;
    prev = NULL;

    while (current != NULL && strcmp(current->key, new_node->key) < 0)
    {
        prev = current;
        current = current->snext;
    }

    new_node->sprev = NULL;
    new_node->snext = current;

    if (prev == NULL)
    {
        ht->shead = new_node;
    }
    else
    {
        prev->snext = new_node;
        new_node->sprev = prev;
    }

    if (current != NULL)
        current->sprev = new_node;

    return (ht->shead);
}
