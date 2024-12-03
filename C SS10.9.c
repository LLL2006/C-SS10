#include <stdio.h>

int main() {
    int row, col, arr[100][100];

    printf("Nhap so dong va so cot: ");
    scanf("%d %d", &row, &col);

    printf("Nhap ma tran:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int n = (row < col) ? row : col;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][i] > arr[j][j]) {
                int temp = arr[i][i];
                arr[i][i] = arr[j][j];
                arr[j][j] = temp;
            }
        }
    }


    printf("Ma tran sau khi sap xep tren duong cheo chinh:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

