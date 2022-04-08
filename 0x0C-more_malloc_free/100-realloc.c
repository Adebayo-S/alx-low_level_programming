#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space of ptr.
 * @new_size: new size, in bytes, of the new memory block.
 *
 * Return: ptr.
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 *
 * addedSpace = old_size % sizeof(unsigned int);

	if (addedSpace == 0)
		numb = old_size / sizeof(unsigned int);
	else
		numb = (old_size / sizeof(unsigned int)) + addedSpace;
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, j, sizeToAdd, sizeToRemove;
	void **modPtr;

	modPtr = ptr;

	if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	else if (new_size > old_size)
	{
		sizeToAdd = new_size - old_size;
		for (i = 0, j = old_size; i < sizeToAdd; i++, j++)
		{
			*(modPtr + j) = malloc(1);
			if (*(modPtr + j) == NULL)
				return (NULL);
		}
		return (ptr);
	}
	else
	{
		sizeToRemove = old_size - new_size;
		for (i = 0, j = old_size - 1; i < sizeToRemove; i++, j--)
		{
			*(modPtr + j) = malloc(0);
			if (*(modPtr + j) == NULL)
				return (NULL);
		}
		return (ptr);
	}
}
