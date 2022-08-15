#include "lists.h"



/**
 *
 *  * add_nodeint - add a node at the beginning of litint_t
 *
 *   * @head: pointer to the head of the linked list
 *
 *    * @n: data to add to new node
 *
 *     * Return: the address of the new element or NULL if it failed
 *
 *      */



listint_t *add_nodeint(listint_t **head, const int n)

{

		listint_t *temp;



			temp = malloc(sizeof(listint_t));

				if (temp == NULL)

							return (NULL);



					temp->n = n;

						temp->next = *head;

							*head = temp;



								return (temp);

}
