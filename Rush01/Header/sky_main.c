#include <unistd.h>
#include "sky_don.h"

int main(void)
{
    int row[4] = {2, 1, 4, 3};

    if (match_clues(row, 4, 2, 2))
        write(1, "passt\n", 6);
    
    else
        write(1, "passt nicht\n", 13);

    return (0);
}

