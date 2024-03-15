/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   make_llist_helper.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/13 17:15:52 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/15 15:54:59 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_1stlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_stack	*ft_stack_new(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		print_error();
	new->nbr = content;
	new->next = NULL;
	return (new);
}

void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_1stlast(*stack))->next = stack_new;
}
