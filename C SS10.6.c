#include <stdio.h>
int main(){
	// Tim kiem tuyen tinh hay goi la tim kiem tuan tu 
	// Duyet tung phan tu trong mang, sau do kiem tra dieu kien roi in ra ket qua
	
	int arr[8]={1,4,3,6,7,2,3,4};
	int item; // khai bao bien item
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("Moi ban nhap gia tri can tim kiem: ");
	scanf("%d", &item);
	for(int i=0;i<length;i++){
		if(arr[i]==item){
			printf("Phan tu %d co vi tri la %d \t",item,i+1);
			return;
		}
	}
	// In ra trong truong hop khong tim thay
	printf("Khong tim thay phan tu %d trong mang",item);
	return 0;
}
