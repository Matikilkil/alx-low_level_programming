#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the pointer to the head of the list
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize the new node */
    new_node->n = n;
    new_node->prev = NULL;

    /* If the list is empty, new node becomes the head */
    if (*head == NULL)
    {
        new_node->next = NULL;
    }
    else
    {
        /* Link new node to the current head */
        new_node->next = *head;
        (*head)->prev = new_node;
    }

    /* Update the head pointer to point to the new node */
    *head = new_node;

    return (new_node);
}

