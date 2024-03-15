/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_utils_2.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 13:52:00 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/15 15:52:17 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index(t_stack *a, int x)
{
	int	i;

	i = 0;
	while (a->nbr != x)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
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
		while (a->nbr > x || temp->nbr < x)
		{
			a = a->next;
			temp = a->next;
			i++;
		}
	}
	return (i);
}

// int main() {
//     // Create a sample linked list for testing
//     t_stack *head = malloc(sizeof(t_stack));
//     head->nbr = 1;

//     t_stack *secondNode = malloc(sizeof(t_stack));
//     secondNode->nbr = 3;

//     t_stack *thirdNode = malloc(sizeof(t_stack));
//     thirdNode->nbr = 5;

//     head->next = secondNode;
//     secondNode->next = thirdNode;
//     thirdNode->next = NULL;

//     // Test ft_find_place_b with different input values
//     printf("Position for 2: %d\n", ft_find_place_b(head, 2));
//     printf("Position for 4: %d\n", ft_find_place_b(head, 4));
//     printf("Position for 6: %d\n", ft_find_place_b(head, 6));

//     // Free allocated memory
//     free(head);
//     free(secondNode);
//     free(thirdNode);

//     return 0;
// }
