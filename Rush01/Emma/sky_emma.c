/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sky_emma.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ahasanov <ahasanov@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/30 16:05:16 by ahasanov         #+#    #+#              */
/*   Updated: 2026/08/30 17:07:17 by ahasanov        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sky_emma.h"

int	ft_input(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

int	cluerr(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		if ((input[i] >= '1' && input[i] <= '4') || input[i] == ' ')
			i++;
		else
		{
			ft_error();
			return (1);
		}
	}
	return (0);
}
//int	clues[16];

int	cluecount(char *input, int *clues)

{
	int	i;

	i = 0;
	int	j;

	j = 0;
	while (input[i] != '\0')
	{
		if (input[i] > '0' && input[i] <= '4')
		{
			clues[j] = input[i] - '0';
			j++;
		}
		i++;
	}
	return (j);
}

int	argerr(int argc)
{
	if (argc != 2)
	{
		ft_error();
		return (1);
	}
	return (0);
}

int	lenerr(int length)
{
	if (length != 31)
	{
		ft_error();
		return (1);
	}
	return (0);
}

int	spacerr(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 1)
		{
			if (input[i] != ' ')
			{
				ft_error();
				return (1);
			}
		}
		i++;
	} return (0);
}

int	main(int argc, char *argv[])
{
	int	length;

	if (argerr(argc))
		return (1);
	if (cluerr(argv[1]))
		return (1);
	if (spacerr(argv[1]))
		return (1);
	length = ft_input(argv[1]);
	if (lenerr(length))
		return (1);
	cluecount(argv[1], clues);
	return (0);
}
