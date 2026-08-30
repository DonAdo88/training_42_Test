# include <unistd.h>
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

int	match_clues(int *row, int size, int left, int right)
{
	if (!is_valid_row(row, size))
		return (0);
	if (left != 0 && count_visible_left(row, size) != left)
		return (0);
	if (right != 0 && count_visible_right(row, size) != right)
		return (0);
	return (1);
}


int main(void)
{

    int row[4] = {4, 3, 2, 1};

    if (match_clues(row, 4, 1, 4))
    {
        write(1, "1", 1);
        write(1, "\n", 1);
        write(1, "Visible from left: ", 19);
        char left_count = count_visible_left(row, 4) + '0';
        write(1, &left_count, 1);
        write(1, "\n", 1);
        write(1, "Visible from right: ", 20);
        char right_count = count_visible_right(row, 4) + '0';
        write(1, &right_count, 1);
        write(1, "\n", 1);
    }

    else
    {
        write(1, "0", 1);
        write(1, "\n", 1);
        write(1, "Visible from left: ", 19);
        char left_count = count_visible_left(row, 4) + '0';
        write(1, &left_count, 1);
        write(1, "\n", 1);
        write(1, "Visible from right: ", 20);
        char right_count = count_visible_right(row, 4) + '0';
        write(1, &right_count, 1);
        write(1, "\n", 1);
    }
}