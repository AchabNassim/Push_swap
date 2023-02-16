#include "push_swap.h"

void    sort_three_elements(t_stack **stack)
{
    if ((*stack)->rank == 3)
        ra(stack);
    else if ((*stack)->next->rank == 3)
        rra(stack);
    if (check_if_sorted(*stack) == 1)
        sa(stack);
}

void    empty_stack_b(t_stack **b, t_stack **a)
{
    while (*b != NULL)
        pa(a, b);
}

void    sort_five_elements(t_stack **a, t_stack **b, int stack_size)
{
    t_stack *smallest;

    while (stack_size != 3)
    {
        smallest = find_smallest_rank(*a);
        if (*a == smallest)
        {
            pb(b, a);
            stack_size--;
        }
        else
        {
            if (smallest->stack_pos > stack_size / 2)
                rra(a);
            else
                ra(a);
        }
    }
    reinit_rank(*a);
    rank_elements(*a, stack_size);
    sort_three_elements(a);
    empty_stack_b(b, a);
}
