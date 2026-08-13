#include <stdio.h>

void rows_columns(int *rows, int *columns){

    int m, n;

    while (1){

        printf("\nEnter number of rows >> ");
        m = scanf("%d", rows);

        if (m != 1)
        {
            while (getchar() != '\n');
        }

        else if (*rows > 0)
        {
            break;
        }

    }

    while (1){

        printf("\nEnter number of columns >> ");
        n = scanf("%d", columns);

        if (n != 1){

            while (getchar() != '\n');
        }
        
        else if (*columns > 0){

            break;
        }
    }
}


void matrix(int rows, int columns){

    int matrix[rows][columns];

    for (int i = 0; i < rows; i++){

        for (int j = 0; j < columns; j++){

            while{

                printf("\nEnter a%d%d: ",i+1,j+1);
                scanf("%d", &matrix[i][j]);

            }

        }
    }

    printf("Matrix  A\n");

    for (int i = 0; i < rows; i++){

        printf("|\t");

        for (int j = 0; j < columns; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("|\n");
    }
}

int main(){

    int m , n;

    rows_columns(&m , &n);
    matrix(m , n);
}