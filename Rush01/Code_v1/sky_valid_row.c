int is_valid_row(int *row, int size)
{
    int i;
    int j;
    
    i = 0;
    while ( i < size)
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