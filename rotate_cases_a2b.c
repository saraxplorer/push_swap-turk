/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate_cases_a2b.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 13:45:11 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/15 15:58:04 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb(t_stack *a, t_stack *b, int c)
{
	int	rot_num;

	rot_num = ft_find_place_b(b, c);
	if (rot_num < ft_index(a, c))
		rot_num = ft_index(a, c);
	return (rot_num);
}

int	ft_case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	r_num;

	r_num = 0;
	if (ft_find_place_b(b, c))
		r_num = listsize(b) - ft_find_place_b(b, c);
	if (r_num < (listsize(a) - ft_index(a, c)) && ft_index(a, c))
		r_num = listsize(a) - ft_index(a, c);
	return (r_num);
}

int	ft_case_rrarb(t_stack *a, t_stack *b, int c)
{
	int	rotate_num;

	rotate_num = 0;
	if (ft_index(a, c))
		rotate_num = listsize(a) - ft_index(a, c);
	rotate_num = ft_find_place_b(b, c) + rotate_num;
	return (rotate_num);
}

int	ft_case_rarrb(t_stack *a, t_stack *b, int c)
{
	int	rotate_num;

	rotate_num = 0;
	if ((ft_find_place_b(b, c)))
		rotate_num = listsize(b) - ft_find_place_b(b, c);
	rotate_num = ft_index(a, c) + rotate_num;
	return (rotate_num);
}
