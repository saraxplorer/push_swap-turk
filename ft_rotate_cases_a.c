/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rotate_cases_a.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/20 16:29:06 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/02/23 18:05:48 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_a(t_stack *a, t_stack *b, int x)
{
	int	rotate_num;

	rotate_num = ft_find_place_a(a, x);
	if (rotate_num < ft_index(b, x))
		rotate_num = ft_index(b, x);
	return (rotate_num);
}

int	ft_case_rarrb_a(t_stack *a, t_stack *b, int x)
{
	int	rotate_num;
	int	rev_index;

	rotate_num = 0;
	rev_index = ft_lstsize(b) - ft_index(b, x);
	if (ft_index(b, x) != 0)
		rotate_num = rev_index;//test with skipping it?
	rotate_num = rotate_num + ft_find_place_a(a, x);// test with rev_index instead
	return (rotate_num);
}

int	ft_case_rrarb_a(t_stack *a, t_stack *b, int x)
{
	int	rotate_num;
	int	rev_index;

	rotate_num = 0;
	rev_index = ft_lstsize(a) - ft_find_place_a(a, x);
	if (ft_find_place_a(a, x) != 0)
		rotate_num = rev_index;
	rotate_num = rotate_num + ft_index(b, x);
	return (rotate_num);
}

int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int x)
{
	int	rotate_num;
	int	rev_index_a;
	int	rev_index_b;

	rotate_num = 0;
	rev_index_a = ft_lstsize(a) - ft_find_place_a(a, x);
	rev_index_b = ft_lstsize(b) - ft_index(b, x);
	if (ft_find_place_a(a, x) != 0)
		rotate_num = rev_index_a;
	if ((rotate_num < rev_index_b) && (ft_index(b, x)!= 0))
		rotate_num = rev_index_a;
	return (rotate_num);
}
