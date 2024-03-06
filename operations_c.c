/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations_c.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 17:45:40 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/02/28 15:58:22 by rshaheen      ########   odam.nl         */
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
	(*b)->next = tmp;
	if (j == 0)
		write(1, "ss\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b, int j)
{
	t_stack	*temp;
	t_stack	*last;

	if (!*a || !*b || !(*a)->next || !(*b)->next)
		return ;
	temp = *a;
	*a = (*a)->next;
	last = ft_1stlast(*a);
	last->next = temp;
	temp->next = NULL;
	temp = *b;
	*b = (*b)->next;
	last = ft_1stlast(*b);
	last->next = temp;
	temp->next = NULL;
	if (j == 0)
		write(1, "rr\n", 3);
}

void	ft_rrr_a(t_stack **a, t_stack **b, int j)
{
	t_stack	*temp;
	int		i;

	if (!*a || !*b || !(*a)->next || !(*b)->next)
		return ;
	i = 0;
	temp = *a;
	while ((*a)->next != NULL)
	{
		*a = (*a)->next;
		i++;
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

void	ft_rrr_b(t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *b;
	while ((*b)->next != NULL)
	{
		*b = (*b)->next;
		i++;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (j == 0)
		write(1, "rrb\n", 4);
}
