/***********************************************************
*
** Allen Whearry Jr.
*
** instagram.com/NoRest4AWhearry
*
** Multidimensional Arrays: 
*
** Create a 5x5 matrix and print each number on its
** specified row and column with correct left align.
************************************************************/

#include <stdio.h>

int main(void)
{
    int M[5][5] = {
                    {10, 5, -3, 17, 82},
                    {9, 0, 3, 8, -7},
                    {32, 20, 1, 0, 14},
                    {4, 0, 8, 7, 6},
                    {16, 99, 43, 8, 12}
                  };
    int i;
    int j;
                  
    for (i = 0; i < 5; i++)
    {
        printf("|");
        for (j = 0; j < 5; j++)
        {
            printf("%2i|", M[i][j]);
        }
        printf("\n");
    }              
    printf("\n");
    return 0;
}
