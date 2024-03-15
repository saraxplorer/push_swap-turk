/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rotate_cases_ba.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/20 16:29:06 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/13 16:55:58 by rshaheen      ########   odam.nl         */
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

int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int x)
{
	int	rotate_num;

	rotate_num = 0;
	if (ft_find_place_a(a, x))
		rotate_num = listsize(a) - ft_find_place_a(a, x);
	if ((rotate_num < listsize(b) - ft_index(b, x)) && ft_index(b, x))
		rotate_num = listsize(b) - ft_index(b, x);
	return (rotate_num);
}

int	ft_case_rarrb_a(t_stack *a, t_stack *b, int x)
{
	int	rotate_num;

	rotate_num = 0;
	if (ft_index(b, x))
		rotate_num = listsize(b) - ft_index(b, x);
	rotate_num = ft_find_place_a(a, x) + rotate_num;
	return (rotate_num);
}

int	ft_case_rrarb_a(t_stack *a, t_stack *b, int x)
{
	int	rotate_num;

	rotate_num = 0;
	if (ft_find_place_a(a, x))
		rotate_num = listsize(a) - ft_find_place_a(a, x);
	rotate_num = ft_index(b, x) + rotate_num;
	return (rotate_num);
}
