#include "lists.h"

/**
 *
 *  * add_nodeint_end - adds a node at the end of the linked list
 *
 *   * @head: head of the node
 *
 *    * @n: The data to be added
 *
 *     * Return: the address of the new element
 *
 *      */



listint_t *add_nodeint_end(listint_t **head, const int n)

{

		listint_t *temp;

			listint_t *new_node;



				new_node = malloc(sizeof(listint_t));

					if (new_node == NULL)

								return (NULL);

						new_node->n = n;

							new_node->next = NULL;

								if (*head == NULL)

											*head = new_node;

									temp = *head;

										while (temp->next != NULL)

													temp = temp->next;

											temp->next = new_node;

												new_node->next = NULL;



													return (new_node);

}
