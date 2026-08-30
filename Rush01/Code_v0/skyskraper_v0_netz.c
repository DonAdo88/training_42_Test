#include <stdio.h>
#include <stdbool.h>

#define SIZE 4

void print_grid(int grid[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

bool is_valid_4x4_sudoku(int grid[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        bool seen[SIZE + 1] = {false};

        for (int j = 0; j < SIZE; j++)
        {
            int value = grid[i][j];

            if (value < 1 || value > SIZE || seen[value])
                return false;
            seen[value] = true;
        }
    }

    for (int j = 0; j < SIZE; j++)
    {
        bool seen[SIZE + 1] = {false};

        for (int i = 0; i < SIZE; i++)
        {
            int value = grid[i][j];

            if (value < 1 || value > SIZE || seen[value])
                return false;
            seen[value] = true;
        }
    }

    for (int row = 0; row < SIZE; row += 2)
    {
        for (int col = 0; col < SIZE; col += 2)
        {
            bool seen[SIZE + 1] = {false};

            for (int i = row; i < row + 2; i++)
            {
                for (int j = col; j < col + 2; j++)
                {
                    int value = grid[i][j];

                    if (value < 1 || value > SIZE || seen[value])
                        return false;
                    seen[value] = true;
                }
            }
        }
    }

    return true;
}

int main(void)
{
    int sudoku[SIZE][SIZE] = {
        {1, 2, 3, 4},
        {3, 4, 1, 2},
        {2, 1, 4, 3},
        {4, 3, 2, 1}
    };

    printf("4x4 Sudoku-like matrix:\n");
    print_grid(sudoku);

    if (is_valid_4x4_sudoku(sudoku))
    {
        printf("\nValid 4x4 Sudoku matrix.\n");
    }
    else
    {
        printf("\nInvalid 4x4 Sudoku matrix.\n");
    }

    return 0;
}