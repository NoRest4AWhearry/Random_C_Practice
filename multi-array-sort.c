/***********************************************************
*
** Allen Whearry Jr.
*
** instagram.com/NoRest4AWhearry
*
** Sorting Mulitdimensional Arrays:
*
** Create a function that sorts a 5x10 multidimensitional
** array of numbers from smallest-largest: Ascending order.
** Print each number on its specified row and column with 
** the correct right align.
*
************************************************************/
#include <stdio.h>
void sort(int row, int column, int a[][column]);

int main(void)
{
    // Initialize Array
    int m[5][10] = {
                    {10, 5, -3, 17, 82, 1, -20, 13, 33, 54},
                    {9, 0, 3, 8, -7, 10, -44, 12, 100, 6},
                    {32, 20, 1, 0, 14, -2, -55, 19, 3, 59},
                    {4, 0, 8, 7, 6, -4, 1, 15, 13, 9},
                    {16, 99, 43, 8, 12, 33, -1, 3, 15 - 5}
                  };
    
    sort(5, 10,m);
    return 0;
}

void sort(int row, int column, int a[][column])
{
    int i,j,k,l, temp;
    
    
    // Sort Array
    // Interate over each row             
    for (i = 0; i < row ; i++)
    {
        printf("|");
        // K is the digit in its number column.
        for (k = 0; k < column - 1; k++)
        {
            //swap number if number in m[i][k] > m[i][k+1].
            for (l = k + 1; l < column; l++)
            {
                if (a[i][k] > a[i][l])
                {
                    temp = a[i][k];
                    a[i][k] = a[i][l];
                    a[i][l] = temp;
                }
            }
        }
        //interate over each column
        for (j = 0; j < column; j++)
        {
            printf("%3i|", a[i][j]);
        }
        printf("\n");
    }

}
