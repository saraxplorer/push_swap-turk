/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/31 15:49:03 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/02/29 17:59:16 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"


typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}			t_stack;

int		check_args(char **argv);
t_stack	*ft_parse(int argc, char **argv);
t_stack	*ft_parse_args_quoted(char **argv);
void	list_args(char **argv, t_stack **a);
int		check_error(char **argv, int i, int j);
int		space(int c);
int		sign(int c);
void	alpha_check(char **argv);
t_stack	*ft_make_llist(int argc, char **argv);
void	print_error(void);
t_stack	*quotation(char **argv);
int		ft_atoi2(const char *str);
void	ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_1stlast(t_stack *lst);
t_stack	*ft_stack_new(int content);
void	ft_freestr(char **lst);
int		ft_checkdup(t_stack *a);
void	ft_free(t_stack **lst);
int		ft_checksorted(t_stack *stack_a);
void	ft_sort(t_stack **stack_a);
void	ft_sa(t_stack **a, int j);
void	ft_ra(t_stack **a, int j);
void	ft_pa(t_stack **a, t_stack **b, int j);
void	ft_rr(t_stack **a, t_stack **b, int j);
void	ft_rra(t_stack **a, int j);
void	ft_sb(t_stack **b, int j);
void	ft_rb(t_stack **b, int j);
void	ft_pb(t_stack **a, t_stack **b, int j);
void	ft_rrb(t_stack **b, int j);
void	ft_ss(t_stack **a, t_stack **b, int j);
void	ft_rrr_a(t_stack **a, t_stack **b, int j);
void	ft_rrr_b(t_stack **b, int j);
int		ft_max(t_stack *a);
int		ft_min(t_stack *a);
int		ft_lstsize(t_stack *lst);
int		ft_index(t_stack *a, int x);
int		ft_find_place_a(t_stack *a, int x);
int		ft_find_place_b(t_stack *b, int x);
int		ft_case_rarb_a(t_stack *a, t_stack *b, int x);
int		ft_case_rarrb_a(t_stack *a, t_stack *b, int x);
int		ft_case_rrarb_a(t_stack *a, t_stack *b, int x);
int		ft_case_rrarrb_a(t_stack *a, t_stack *b, int x);
int		ft_case_rarb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int		ft_rarb_push(t_stack **a, t_stack **b, int c, char s);
int		ft_rrarrb_push(t_stack **a, t_stack **b, int c, char s);
int		ft_rrarb_push(t_stack **a, t_stack **b, int c, char s);
int		ft_rarrb_push(t_stack **a, t_stack **b, int c, char s);
int		ft_cheapest_rot_ab(t_stack *a, t_stack *b);
int		ft_cheapest_rot_ba(t_stack *a, t_stack *b);
void	check_int(int argc, char **argv);
void	input_error(int argc, char **argv);

#endif