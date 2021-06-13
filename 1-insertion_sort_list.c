#include "sort.h"
/**
*
*
*/
void insertion_sort_list(listint_t **list)
{
    /* declaration of vars */
    listint_t *current = NULL, *anterior=NULL;
    int tmp = 0;

    /* node to roam the list */
    current = *list;
    /*loop to roam the list (loop forward)*/
    for (;current->next != NULL; current=current->next)
    {
        /* change condition (fordward ->)*/
        if (current->n > current->next->n)
        {
            tmp = current->next->n;
            current->next->n = current->n;
            current->n = tmp;
	        print_list(*list);

            /* loop to change the minor elements (loop backward <-) */
            for (anterior = current; anterior->n < anterior->prev->n; anterior = anterior->prev)
            {
                tmp = anterior->prev->n;
                anterior->prev->n = anterior->n;
                anterior->n = tmp;
                print_list(*list);
                if (anterior->prev == NULL)
                    break;
            }

        }

    }
}
