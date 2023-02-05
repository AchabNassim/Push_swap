#include "push_swap.h"

void    sort_elements(t_stack **a, t_stack **b, int stack_size)
{
    node_position(*a);
	rank_elements(*a, stack_size);
    if (stack_size == 2)
    {
        sa(a);
        return ;
    }
    else if (stack_size == 3)
    {
        sort_three_elements(a);
        return ;
    }
    // else if (stack_size > 3 && stack_size < 6)
    // {
    //     sort_five_elements(a, b, stack_size);
    //     return ;
    // }
    /* else if (stack_size <= 100 && stack_size > 5)
    {
        sort_hundred_elements(a, b);
        return ;
    }
    else
    {
        sort_large_number(a, b);
        return ;
    }*/
}

void    sort_three_elements(t_stack **stack)
{
    if ((*stack)->rank == 3 && (*stack)->next->rank == 2)
    {    
        ra(stack);
        sa(stack);
    }
    else if ((*stack)->rank == 1 && (*stack)->next->rank == 3)
    {
        sa(stack);
        ra(stack);
    }
    else if ((*stack)->rank == 3)
        ra(stack);
}

// void    sort_five_elements(t_stack **a, t_stack **b, int stack_size)
// {
//     int i;

//     i = 0;
//     while (i < 2)
//     {
//         if ((*a)->rank < 2 + i)
//         {
//             pb(b, a);
//             i++;
//         }
//         else
//             ra(a);
//     }
//     rank_elements(*a, stack_size - 2);
//     if ((*a)->next->next == NULL)
//     {    
//         sa(a);
//         while (*b != NULL)
//             pa(a, b);
//     }
//     else
//     {
//         sort_three_elements(a);
//         while (*b != NULL)
//           pa(a, b);
//     }
// }