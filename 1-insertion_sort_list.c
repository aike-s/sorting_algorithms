#include "sort.h"
/**
*
*
*/
void insertion_sort_list(listint_t **list)
{
    /* declaration of vars */
    listint_t *current_node = NULL, *previous_node=NULL;
    int tmp = 0;

    /* node to roam the list */
    current_node = *list;
    /*loop to roam the list (loop forward)*/
    for (;current_node->next != NULL; current_node=current_node->next)
    {
        /* change condition (fordward ->)*/
        if (current_node->n > current_node->next->n)
        {
            tmp = current_node->next->n;
            current_node->next->n = current_node->n;
            current_node->n = tmp;
	        print_list(*list);

            /* loop to change the minor elements (loop backward <-) */
            for (previous_node = current_node; previous_node->n < ((previous_node->prev)?previous_node->prev->n:0); previous_node = previous_node->prev)
            {
                tmp = previous_node->prev->n;
                previous_node->prev->n = previous_node->n;
                previous_node->n = tmp;
                print_list(*list);
            }

        }

    }
}
