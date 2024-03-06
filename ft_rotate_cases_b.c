/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_solver_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 13:45:11 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/02/16 19:39:41 by rshaheen      ########   odam.nl         */
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

int	ft_case_rrarb(t_stack *a, t_stack *b, int c)
{
	int	rotate_num;

	rotate_num = 0;
	if (ft_index(a, c))
		rotate_num = ft_lstsize(a) - ft_index(a, c);
	rotate_num = rotate_num + ft_find_place_b(b, c);
	return (rotate_num);
}

int	ft_case_rarrb(t_stack *a, t_stack *b, int c)
{
	int	rotate_num;

	rotate_num = 0;
	if ((ft_find_place_b(b, c)) != 0)
		rotate_num = ft_lstsize(b) - ft_find_place_b(b, c);
	rotate_num = rotate_num + ft_index(a, c);
	return (rotate_num);
}


int	ft_case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	r_num;
	int	indx_b;
	int	indx_a;
	int	rev_indx_a;
	int	rev_indx_b;

	r_num = 0;
	indx_b = ft_find_place_b(b, c);
	indx_a = ft_index(a, c);
	rev_indx_a = ft_lstsize(a)- indx_a;
	rev_indx_b = ft_lstsize(b)- indx_b;
	if (indx_b != 0)
		r_num = rev_indx_b;
	if ((indx_a != 0) && (r_num < rev_indx_a))
		r_num = rev_indx_a;
	return (r_num);
}

