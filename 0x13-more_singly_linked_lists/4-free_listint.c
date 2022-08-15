#include "lists.h"



/**
 *
 * * free_listint - free a list
 *
 * * @head: pointer to first node
 *
 * *
 *
 * */



void free_listint(listint_t *head)

{

		listint_t *temp;



			while (head != NULL)

					{

								temp = head->next;

										free(head);

												head = temp;

													}

}
