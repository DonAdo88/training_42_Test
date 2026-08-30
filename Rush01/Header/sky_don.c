/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sky_don.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ahasanov <ahasanov@learner.42.tech>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/30 09:31:37 by ahasanov         #+#    #+#              */
/*   Updated: 2026/08/30 13:03:51 by ahasanov        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "sky_don.h"

int	match_clues(int *row, int size, int left, int right)
{
	int	visible_left = count_visible_left(row, size);
	int	visible_right = count_visible_right(row, size);

	return (visible_left == left && visible_right == right);
}

int	count_visible_left(int *row, int size)
{
	int	i;
	int	max;
	int	visible;

	i = 0;
	max = 0;
	visible = 0;
	while (i < size)
	{
		if (row[i] > max)
		{
			max = row[i];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	count_visible_right(int *row, int size)
{
	int	i;
	int	max;
	int	visible;

	i = size - 1;
	max = 0;
	visible = 0;
	while (i >= 0)
	{
		if (row[i] > max)
		{
			max = row[i];
			visible++;
		}
		i--;
	}
	return (visible);
}

int	is_valid_row(int *row, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		if (row[i] < 1 || row[i] > size)
			return (0);
		j = i + 1;
		while (j < size)
		{
			if (row[i] == row[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/*int is_valid_col(int **grid, int col, int size)
{
int i;
int j;

i = 0;
while (i < size)
{
if (grid[i][col] < 1 || grid[i][col] > size)
return (0);
j = i + 1;
while (j < size)
{
if (grid[i][col] == grid[j][col])
return (0);
j++;
}
i++;
}
return (1);
}*/
