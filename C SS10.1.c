#include <stdio.h>
int main(){
	int arr[] = {12, 6 ,20 ,26 , 1, 2};
	int tim;
	int n = sizeof(arr)/sizeof(arr[0]);
	int count;
	int i;
	
	printf("Nhap vao phan tu can tim: ");
	scanf("%d",&tim);
	
	for(i = 0; i < n; i++){
		if(tim == arr[i]){
			printf("Phan tu %d ton tai tai vi tri %d.\n", tim, i + 1);
			count = 1;
		}
	}
	
	if(!count) {
		printf("Phan tu %d khong ton tai trong mang.\n",tim);
	}
	
	
	return 0;
}
