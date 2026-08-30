/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sky_ema.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ahasanov <ahasanov@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/30 16:27:38 by ahasanov         #+#    #+#              */
/*   Updated: 2026/08/30 16:27:38 by ahasanov        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "sky_emma.h"

int	ft_input(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		i++;
	}
	return (0);
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

int	cluecount(char *input, int *clues)

{
	int	clues[16];
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
	return (0);
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

int	spacerr(char *argv[])
{
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 1)
		{
			if (argv[1][i] != ' ')
			{
				ft_error();
				return (1);
			}
			i++;
		}
		return (0);
	}
}
