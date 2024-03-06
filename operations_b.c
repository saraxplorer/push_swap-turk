/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations_b.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 16:34:35 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/02/15 17:08:57 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_stack **b, int j)
{
	t_stack	*temp;

	if (!*b || !(*b)->next)
		return ;
	temp = *b;
	*b = (*b)->next;
	(*b)->next = temp;
	if (j == 0)
		write (1, "sb\n", 3);
}

void	ft_rb(t_stack **b, int j)
{
	t_stack	*temp;
	t_stack	*last;

	if (!*b || !(*b)->next)
		return ;
	temp = *b;
	*b = (*b)->next;
	last = ft_1stlast(*b);
	last->next = temp;
	temp->next = NULL;
	if (j == 0)
		write (1, "rb\n", 3);
}

void	ft_pb(t_stack **a, t_stack **b, int j)
{
	t_stack	*temp;

	if (!*a)
		return ;
	temp = *b;
	*b = *a;
	*a = temp;
	if (j == 0)
		write (1, "pb\n", 3);
}

void	ft_rrb(t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	if (!*b || !(*b)->next)
		return ;
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
