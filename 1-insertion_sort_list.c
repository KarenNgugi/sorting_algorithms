void insertion_sort_list(listint_t **list)
{
    int count = 0;
    listint_t *curr = *list;
    listint_t *node = malloc(sizeof(listint_t));
    if (node == NULL)
    {
        free(node);
        return (NULL);
    }

    while (curr)
    {
        count += 1;
        printf("Current node %d: %d\n", count, curr->n);
        if (curr->prev != NULL)
        {
            if (curr->n < curr->prev->n)
            {
                printf("Current value is %d and previous value is %d\n", curr->n, curr->prev->n);
                node = curr;
                node->prev = curr->prev->prev;
                node->next = curr->prev;
                
                curr = curr->prev;
                curr->prev = node;
                curr->next = node->next;
            }
        }

        else
            printf("Previous node %d: (nil))\n\n", count - 1);
        
        curr = curr->next;
    }
}
