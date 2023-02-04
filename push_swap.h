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

int		ft_strcmp(const char *s1, const char *s2);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
long	ft_atoi(const char *str);
int     ft_strlen(char *s);
int     ft_isdigit(int c);
void	ft_putstr_fd(char *s, int fd);

t_stack	*ft_lst_new(int numb);
int		calculate_elements(char **arr);
int		valid_number(char *arr);
int		is_number(char *arr);
void	stack_pos(t_stack *stack);

int     push(t_stack **stack, t_stack *node);
void    sa(t_stack **stack_a);
void    sb(t_stack **stack_b);
void    ss(t_stack **stack_a, t_stack **stack_b);
void    pa(t_stack **stack_a, t_stack **stack_b);
void    pb(t_stack **stack_b, t_stack **stack_a);
void    ra(t_stack **stack_a);
void    rb(t_stack **stack_b);
void    rr(t_stack **stack_a, t_stack **stack_b);
// void    rrb(t_stack **stack_b);

#endif