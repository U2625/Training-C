#include <stdio.h>
#include <stdlib.h>
 
 
void FillMatrix(int **Matrix, int lines, int columns);
void ShowMatrix(int **Matrix, int lines, int columns);
void SwapColums(int **Matrix, int lines, int columns);
 
int main()
{
    int lines, columns;
    printf("Enter number of lines: ");
    scanf_s("%d", &lines);
    printf("Enter number of columns: ");
    scanf_s("%d", &columns);
    int **Matrix = (int**)malloc(lines * sizeof(int));
    for (int i = 0; i < lines; i++)
        Matrix[i] = (int*)malloc(columns * sizeof(int));
    FillMatrix(Matrix, lines, columns);
    ShowMatrix(Matrix, lines, columns);
    SwapColums(Matrix, lines, columns);
    for (int i = 0; i < lines; i++)
        free(Matrix[i]);
    free(Matrix);
    _getch();
    return 0;
}
 
void FillMatrix(int **Matrix, int lines, int columns)
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Element Matrix[%d][%d] = ", i + 1, j + 1);
            scanf_s("%d", &Matrix[i][j]);
        }
    }
}
void ShowMatrix(int **Matrix, int lines, int columns)
{
    printf("Your matrix:\n");
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
}
void SwapColums(int **Matrix, int lines, int columns)
{
    int FirstSwap, SecondSwap;
    printf("Lets swap columns!\n");
    printf("Enter first column: ");
    scanf_s("%d", &FirstSwap);
    printf("Enter second column: ");
    scanf_s("%d", &SecondSwap);
    int *temp = (int*)malloc(lines * sizeof(int));
    for (int i = 0; i < lines; i++)
    {
        temp[i] = Matrix[i][FirstSwap - 1];
        Matrix[i][FirstSwap - 1] = Matrix[i][SecondSwap - 1];
        Matrix[i][SecondSwap - 1] = temp[i];
    }
    free(temp);
    printf("New matrix with swapped columnes %d and %d: \n", FirstSwap, SecondSwap);
    ShowMatrix(Matrix, lines, columns);
}
