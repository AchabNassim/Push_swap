#include "push_swap.h"

void    sort_elements(t_stack **a, t_stack **b, int stack_size)
{
    node_position(*a);
	rank_elements(*a, stack_size);
    if (stack_size <= 6)
    {
        small_sort(a, b, stack_size);
    }
}

void    small_sort(t_stack **a, t_stack **b, int stack_size)
{
    if (stack_size == 2)
        sa(a);
    else if (stack_size == 3)
        sort_three_elements(a);
    else
        sort_five_elements(a, b, stack_size);
}
