#include "lists.h"



/**
 *
 *  * sum_listint - adds all of the dat (n) in the linked list
 *
 *   * @head: pointer to head pointer of linked list
 *
 *    * Return: the sum or 0 if the list is empty
 *
 *     */



int sum_listint(listint_t *head)

{

		int sum = 0;



			while (head != NULL)

					{

								sum += head->n;

										head = head->next;

											}



				return (sum);

}
