#include <stdio.h>
#include <math.h>
#include "heron.h"
#include <stdlib.h>

/**
 * Iteration - Perform an Iteration for a Heron Sequence.
 * @P: The Value heron sequence converging to its root square.
 * @X0: the Previous Iteration term value.
 * Return: Iteration value.
*/
double Iteration(double P, double X0)
{
	return (0.5 * (X0 + (P / X0)));
}

/**
 * heron - function that return the Heron sequence until having
 **convergence with an error less or equal to 10^(-7).
 * @p: The Value heron sequence converging to its root square.
 * @x0: the Previous Iteration term value.
 * Return: Address of the linked list Head.
*/
t_cell *heron(double p, double x0)
{
	double Actual_sqrt = sqrt(p);
	t_cell *Head = NULL;
	t_cell *ptr = NULL, *ptr_tmp = NULL;
	double PREV_elt = 0;

	Head = (t_cell *) malloc(sizeof(t_cell));
	if (!Head)
		return (NULL);
	Head->elt = x0;
	Head->next = NULL;
	ptr = Head;

	while (fabs(Iteration(p, ptr->elt) - Actual_sqrt) >= 0.000000001)
	{
		PREV_elt = ptr->elt;

		ptr_tmp = ptr;
		ptr = (t_cell *) malloc(sizeof(t_cell));
		ptr->next = ptr_tmp;
		ptr->elt = Iteration(p, PREV_elt);
	}

	return (ptr);
}
