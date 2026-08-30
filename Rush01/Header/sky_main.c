/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sky_main.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ahasanov <ahasanov@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/30 09:32:00 by ahasanov         #+#    #+#              */
/*   Updated: 2026/08/30 13:04:31 by ahasanov        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sky_don.h"
#include <stdio.h>

int	main(void)
{
	int	row[4];
	int	left;
	int	right;

	int	line[6] =
	{
		4, 1, 2, 3, 4, 1
	};
	printf("1-%d\n", line[0]);
	printf("2-%d\n", line[1]);
	printf("3-%d\n", line[2]);
	printf("4-%d\n", line[3]);
	printf("5-%d\n", line[4]);
	printf("6-%d\n", line[5]);
	left = line[0];
	row[0] = line[1];
	row[1] = line[2];
	row[2] = line[3];
	row[3] = line[4];
	right = line[5];
	printf("1--%d\n", line[0]);
	printf("2--%d\n", line[1]);
	printf("3--%d\n", line[2]);
	printf("4--%d\n", line[3]);
	printf("5--%d\n", line[4]);
	printf("6--%d\n", line[5]);
	if (is_valid_row(row, 4) && match_clues(row, 4, left, right))
	{
		write(1, "passt\n", 6);
	}
	else
	{
		write(1, "passt nicht\n", 13);
	}
	return (0);
}
