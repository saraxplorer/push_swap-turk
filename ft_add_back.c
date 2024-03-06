/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_add_back.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 12:55:19 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/02/01 14:01:04 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (*stack == NULL)
		*stack = stack_new;
	else
		(ft_1stlast(*stack))->next = stack_new;
}