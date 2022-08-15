#include "lists.h"

/**
 *
 *  * pop_listint - deletes the head node
 *
 *   * @head: pointer to the first node
 *
 *    * Return: The head node's data or 0 if it is empty
 *
 *     */



int pop_listint(listint_t **head)

{

		listint_t *temp;

			int data;



				if (*head == NULL)

							return (0);



					temp = *head;

						data = temp->n;



							*head = temp->next;



								free(temp);



									return (data);

}
