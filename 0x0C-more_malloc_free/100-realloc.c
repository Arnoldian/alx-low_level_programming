#include "main.h"
#include <stdlib.h>

/**
 * _realloc - func reallocates memory block using malloc and free
 * @ptr: pointer to mem prev alloc parameter
 * @old_size: bytes size of alloc space of ptr parameter
 * @new_size: bytes size mem block parameter
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
        if (new_size == 0 && ptr != NULL)
        {
                free(ptr);

                return (NULL);
        }

        if (ptr == NULL)
                ptr = malloc(new_size);

        if (new_size == old_size)
                return (ptr);

        free(ptr);
        ptr = malloc(new_size);

        return (ptr);
}
