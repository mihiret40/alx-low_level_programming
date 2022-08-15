#include "lists.h"

/**
 *
 *  * listint_len - counts the elements of litint
 *
 *   * @h: linked list
 *
 *    * Return: The number of elements
 *
 *     */



size_t listint_len(const listint_t *h)

{

		size_t count = 0;



			while (h != NULL)

					{

								h = h->next;

										count++;

											}

				return (count);

}
