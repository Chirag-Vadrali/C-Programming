#include <stdio.h>
int main(){
        // Rows, columns(this has to be declared)
        // 2D array is the array of the different arrays in a single array
    int numbers [][3] = {{1,2,3},
                         {4,5,6},
                         {6,7,8}
                        };
    // printf("%d", numbers[0][0]);
    // printf("%d", numbers[0][1]);
    // printf("%d", numbers[0][2]);

    for (int i = 0; i<3;i++){   //row
        for (int j = 0;j<3;j++){    //col
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
}
