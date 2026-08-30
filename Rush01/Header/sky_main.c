/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sky_main.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/30 09:32:00 by username         #+#    #+#              */
/*   Updated: 2026/08/30 11:57:12 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sky_don.h"
#include <stdio.h>

int	main(void)
{
	int	row[4];
	/*int	*row[0];
	int	*row[1];
	int	*row[2];
	int	*row[3];*/

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
	line[1] = row[0];
	line[2] = row[1];
	line[3] = row[2];
	line[4] = row[3];
	line[0] = match_clues(line, 4, 2, 2);
	line[5] = match_clues(line, 4, 2, 2);
	printf("1--%d\n", line[0]);
	printf("2--%d\n", line[1]);
	printf("3--%d\n", line[2]);
	printf("4--%d\n", line[3]);
	printf("5--%d\n", line[4]);
	printf("6--%d\n", line[5]);
	if (match_clues(row, 4, 2, 2))
	{
		write(1, "passt\n", 6);
	}
	else
	{
		write(1, "passt nicht\n", 13);
	}
	return (0);
}
