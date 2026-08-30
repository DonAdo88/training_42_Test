int count_visible_left(int *row, int size)
{
    int i;
    int max;
    int visible;
    
    i = 0;
    max = 0;
    visible = 0;
    while ( i < size)
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