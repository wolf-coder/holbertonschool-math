#ifndef Func_h
#define Func_h

/**
 * struct complex - Structure to represent a Node
 * @elt: Iteration result of Heron's formula.
 * @next: Node Pointer to the next element.
*/
typedef struct Node
{
	double elt;
	struct Node *next;
} t_cell;

t_cell *heron(double p, double x0);
#endif
