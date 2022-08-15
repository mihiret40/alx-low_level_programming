nclude "lists.h"

/**
 *
 *  * get_nodeint_at_index - get node at the given index
 *
 *   * @head: pointer to first node
 *
 *    * @index: node to locate
 *
 *     * Return: pointer to nth node
 *
 *      */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

		unsigned int count = 0;



			if (index == 0)

						return (head);



				while (count < index)

						{

									if (head->next == NULL)

													return (NULL);

											head = head->next;

													count++;

														}



					return (head);

}
