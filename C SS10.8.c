#include <stdio.h>

int main() {
	int n, m, arr[100][100];
	
	printf("Nhap so dong va cot: ");
	scanf("%d %d", &n, &m);
	
	printf("Nhap ma tran :\n");
	for (int i = 0; i < n; i++)
	    for(int j = 0; j < m; j++)
	        scanf("%d",&arr[i][j]);
	
	for (int cot = 0; cot < m; cot++) {
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++) {
				if (arr[i][cot] > arr[j][cot]) {
					int temp = arr[i][cot];
					arr[i][cot] = arr[j][cot];
					arr[j][cot] = temp;
				}
			}
		}
	}
	
	printf("Ma tran sau sap xep: \n");
	for (int i = 0; i < n; i++) {
		for (int j =0; j < m; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	
	return 0;
}
