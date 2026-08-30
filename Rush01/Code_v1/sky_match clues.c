int match_clues(int *row, int size, int left, int right)
{
    if (!is_vali_row(row, size))
        return (0);
    if (left != 0 && count_visible_left(row, size) != left)
        return (0);
    if (right != 0 && count_visible_right(row, size) != right)
        return (0);
    return (1); 
}