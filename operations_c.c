/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations_c.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 17:45:40 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/15 15:51:08 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;

	if (!*a || (!(*a)->next) || !*b || (!(*b)->next))
		return ;
	tmp = *a;
	*a = (*a)->next;
	(*a)->next = tmp;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "ss\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b, int j)
{
	t_stack	*temp;

	if (!*a || !*b || !(*a)->next || !(*b)->next)
		return ;
	temp = *a;
	*a = ft_1stlast(*a);
	(*a)->next = temp;
	*a = temp->next;
	temp->next = NULL;
	temp = *b;
	*b = ft_1stlast(*b);
	(*b)->next = temp;
	*b = temp->next;
	temp->next = NULL;
	if (j == 0)
		write(1, "rr\n", 3);
}

void	ft_rrr_b(t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *b;
	while ((*b)->next)
	{
		i++;
		*b = (*b)->next;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (j == 0)
		write(1, "rrr\n", 4);
}

void	ft_rrr_a(t_stack **a, t_stack **b, int j)
{
	t_stack	*temp;
	int		i;

	if (!*a || !*b || !(*a)->next || !(*b)->next)
		return ;
	i = 0;
	temp = *a;
	while ((*a)->next)
	{
		i++;
		*a = (*a)->next;
	}
	(*a)->next = temp;
	while (i > 1)
	{
		temp = temp->next;
		i--;
	}
	temp->next = NULL;
	ft_rrr_b(b, j);
}
