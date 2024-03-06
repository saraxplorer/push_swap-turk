/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_error.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/02 20:29:39 by rshaheen      #+#    #+#                 */
/*   Updated: 2024/03/06 17:48:21 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	input_error(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		exit (1);
	check_int(argc, argv);
	ft_atoi2(argv[i]);
}

void	check_int(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '\0')
			print_error();
		while (j < ft_strlen(argv[i]))
		{
			if (!ft_isdigit(argv[i][j]))
			{
				if (ft_strlen(argv[i]) != 1 && (argv[i][j] == '-'
					|| argv[i][j] == '+'))
					j++;
				else
					print_error();
			}
			j++;
		}
		i++;
	}
}

int	ft_atoi2(const char *str)
{
	int				sign;
	long long int	i;

	i = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			print_error();
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((sign * i) > LLONG_MAX || (sign * i) < LLONG_MIN)
		print_error();
	return (sign * i);
}


void	print_error(void)
{
	ft_putstr_fd ("Error\n", 2);
	exit(1);
}
