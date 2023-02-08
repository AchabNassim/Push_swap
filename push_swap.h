#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_stack
{
	int				data;
	int				rank;
	int				stack_pos;
	struct s_stack	*next;
}					t_stack;

// library function
int		ft_strcmp(const char *s1, const char *s2);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
long	ft_atoi(const char *str);
int     ft_strlen(char *s);
int     ft_isdigit(int c);
void	ft_putstr_fd(char *s, int fd);

// checkers
int		valid_number(char *arr);
int		is_number(char *arr);
int		check_duplicates(char **arr);
int		check_limits(char **arr);
int		check_if_sorted(t_stack *stack);

// utils
int		calculate_elements(char **arr);
char	**create_char_array(int ac, char **av);
void	free_array(char	**arr);
int		parse_args(int ac, char **av, t_stack **a, int *stack_size);
void	create_stack(t_stack **stack, char **arr);

// node utils
t_stack	*ft_lst_new(int numb);
t_stack	*find_smallest_node(t_stack *stack);
t_stack	*find_smallest_rank(t_stack *stack);
void	reinit_rank(t_stack *stack);
void	node_position(t_stack *stack);
void	rank_elements(t_stack *stack, int size);
int     push(t_stack **stack, t_stack *node);
void	swap(t_stack **stack);
void	rotate(t_stack **stack);
void	reverse_rotate(t_stack **stack);
void	print_stack(t_stack *stack);

// sort functions
void    sort_elements(t_stack **a, t_stack **b, int stack_size);
void	small_sort(t_stack **a, t_stack **b, int stack_size);
void	sort_three_elements(t_stack **a);
void    sort_five_elements(t_stack **a, t_stack **b, int stack_size);

// actions
void    sa(t_stack **stack_a);
void    sb(t_stack **stack_b);
void    ss(t_stack **stack_a, t_stack **stack_b);
void    pa(t_stack **stack_a, t_stack **stack_b);
void    pb(t_stack **stack_b, t_stack **stack_a);
void    ra(t_stack **stack_a);
void    rb(t_stack **stack_b);
void    rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
// void    rrb(t_stack **stack_b);

#endif