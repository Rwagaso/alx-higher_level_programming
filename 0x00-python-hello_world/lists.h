<<<<<<< HEAD
fndef _LIST_H_
#define _LIST_H_
=======
#ifndef LISTS_H
#define LISTS_H
>>>>>>> a6f7ce35fbc6f03db88fe99cc83f3e5004d369e8

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
<<<<<<< HEAD
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
=======
 * for alx  project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
>>>>>>> a6f7ce35fbc6f03db88fe99cc83f3e5004d369e8
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

<<<<<<< HEAD
#endif
=======
#endif /* LISTS_H */

>>>>>>> a6f7ce35fbc6f03db88fe99cc83f3e5004d369e8
