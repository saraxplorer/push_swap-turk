/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utils_2.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 13:52:00 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/02/28 16:21:31 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index(t_stack *a, int x)
{
	int	i;

	i = 0;
	while (a->nbr != x)
	{
		a = a->next;
		i++;
	}
	//a->index = 0;
	return (i);
}

int	ft_find_place_b(t_stack *b, int x)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (x > b->nbr && x < ft_1stlast(b)->nbr)
		i = 0;
	else if (x > ft_max(b) || x < ft_min(b))
		i = ft_index(b, ft_max(b));
	else
	{
		tmp = b->next;
		while (b->nbr < x || tmp->nbr > x)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_stack *a, int x)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (x < a->nbr && x > ft_1stlast(a)->nbr)
		i = 0;
	else if (x > ft_max(a) || x < ft_min(a))
		i = ft_index(a, ft_min(a));
	else
	{
		temp = a->next;
		while (temp->nbr < x || a->nbr > x)
		{
			a = a->next;
			temp = a->next;
			i++;
		}
	}
	return (i);
}



// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// int main(void)
// {
//   // Create two nodes for testing
//     t_stack *node1 = malloc(sizeof(t_stack));
//     t_stack *node2 = malloc(sizeof(t_stack));
// 	t_stack *node3 = malloc(sizeof(t_stack));
// 	t_stack *node4 = malloc(sizeof(t_stack));
//     // Assign values to the nodes
//     node1->nbr = 9;
//     node2->nbr = 8;
// 	node3->nbr = 3;
// 	node4->nbr = 1;

//     // Link the nodes
//     node1->next = node2;
//     node2->next = node3;
// 	node3->next = node4;
// 	node4->next = NULL;

//     // Create a pointer to the stack
//     t_stack *stack = node1;

// 	printf("%d", ft_find_place_b(stack, 5));

//     free(node1);
//     free(node2);
// 	free(node3);
// 	free(node4);

//     return 0;
// }