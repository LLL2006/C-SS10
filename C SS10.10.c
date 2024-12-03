#include <stdio.h>

int main() {
    int row, col, arr[100][100];

    printf("Nhap so dong va cot: ");
    scanf("%d %d", &row, &col);

    printf("Nhap ma tran:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row - 1 && i < col - 1; i++) {
        for (int j = i + 1; j < row && j < col; j++) {
            if (arr[i][col - i - 1] < arr[j][col - j - 1]) {
                int temp = arr[i][col - i - 1];
                arr[i][col - i - 1] = arr[j][col - j - 1];
                arr[j][col - j - 1] = temp;
            }
        }
    }

    printf("Ma tran sau khi sap xep duong cheo phu giam dan:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

