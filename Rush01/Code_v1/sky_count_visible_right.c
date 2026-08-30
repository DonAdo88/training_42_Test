int count_visible_right(int *row, int size)
{
    int i;
    int max;
    int visible;
    
    i = size - 1;
    max = 0;
    visible = 0;
    while ( i >= 0)
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