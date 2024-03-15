/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 19:20:55 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/13 16:48:30 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_stack **a)
{
	if (ft_min(*a) == (*a)->nbr)
	{
		ft_rra(a, 0);
		ft_sa(a, 0);
	}
	else if (ft_max(*a) == (*a)->nbr)
	{
		ft_ra(a, 0);
		if (!ft_checksorted(*a))
			ft_sa(a, 0);
	}
	else
	{
		if (ft_index(*a, ft_max(*a)) == 1)
			ft_rra(a, 0);
		else
			ft_sa(a, 0);
	}
}

void	sort_n_push_till_3(t_stack **a, t_stack **b)
{
	int		cheapest_op;
	t_stack	*tmp;

	while (listsize(*a) > 3 && !ft_checksorted(*a))
	{
		tmp = *a;
		cheapest_op = ft_cheapest_rot_ab(*a, *b);
		while (cheapest_op >= 0)
		{
			if (cheapest_op == ft_case_rarb(*a, *b, tmp->nbr))
				cheapest_op = ft_rarb_push(a, b, tmp->nbr, 'a');
			else if (cheapest_op == ft_case_rrarrb(*a, *b, tmp->nbr))
				cheapest_op = ft_rrarrb_push(a, b, tmp->nbr, 'a');
			else if (cheapest_op == ft_case_rrarb(*a, *b, tmp->nbr))
				cheapest_op = ft_rrarb_push(a, b, tmp->nbr, 'a');
			else if (cheapest_op == ft_case_rarrb(*a, *b, tmp->nbr))
				cheapest_op = ft_rarrb_push(a, b, tmp->nbr, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_stack	*ft_sort_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (listsize(*a) > 3 && !ft_checksorted(*a))
		ft_pb(a, &b, 0);
	if (listsize(*a) > 3 && !ft_checksorted(*a))
		ft_pb(a, &b, 0);
	if (listsize(*a) > 3 && !ft_checksorted(*a))
		sort_n_push_till_3(a, &b);
	if (!ft_checksorted(*a))
		ft_sort_3(a);
	return (b);
}

t_stack	**ft_sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (*b)
	{
		tmp = *b;
		i = ft_cheapest_rot_ba(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*a, *b, tmp->nbr))
				i = ft_rarb_push(a, b, tmp->nbr, 'b');
			else if (i == ft_case_rarrb_a(*a, *b, tmp->nbr))
				i = ft_rarrb_push(a, b, tmp->nbr, 'b');
			else if (i == ft_case_rrarb_a(*a, *b, tmp->nbr))
				i = ft_rrarb_push(a, b, tmp->nbr, 'b');
			else if (i == ft_case_rrarrb_a(*a, *b, tmp->nbr))
				i = ft_rrarrb_push(a, b, tmp->nbr, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (a);
}

void	ft_sort(t_stack **a)
{
	int		index_of_min;
	t_stack	*b;

	b = NULL;
	if (listsize(*a) == 2)
		ft_sa(a, 0);
	else
	{
		b = ft_sort_b(a);
		a = ft_sort_a(a, &b);
		index_of_min = ft_index(*a, ft_min(*a));
		if (index_of_min < listsize(*a) - index_of_min)
		{
			while ((*a)->nbr != ft_min(*a))
				ft_ra(a, 0);
		}
		else
		{
			while ((*a)->nbr != ft_min(*a))
				ft_rra(a, 0);
		}
	}
}
