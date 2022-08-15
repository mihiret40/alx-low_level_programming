#include "lists.h"



/**
 *
 *  * insert_nodeint_at_index - insert a new node at a given position
 *
 *   * @head: pointer to the first node
 *
 *    * @idx: the index of the list where the new node will be added
 *
 *     * @n: The data to be added
 *
 *      * Return: the address of the new node or NULL if it failed
 *
 *       */



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{

		unsigned int count = 0;

			listint_t *temp, *new_node;



				/* check for empty pointer*/

				if (head == NULL)

							return (NULL);



					/* malloc and set values for new node*/

					new_node = malloc(sizeof(listint_t));

						if (new_node == NULL)

									return (NULL);

							new_node->n = n;



								/* check for idx 0*/

								if (idx == 0)

										{

													new_node->next = *head;

															*head = new_node;

																	return (new_node);

																		}



									/* go through the list to and add the node*/

									temp = *head;

										while (temp != NULL && count < (idx - 1))

												{

															temp = temp->next;

																	count++;



																			if (temp == NULL)

																						{

																										free(new_node);

																													return (NULL);

																															}

																				}



											new_node->next = temp->next;

												temp->next = new_node;

													return (new_node);

}
