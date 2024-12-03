#include <stdio.h>
int main() {
	// tim kiem nhi pham(binary search)
	// tim kiem trong mang da duoc sap xep
	
	int arr[8]={1,4,6,7,11,14,16,19};
	int item;
	int length= sizeof(arr)/sizeof(arr[0]);
	printf("Moi nhap gia tri can tim kiem: ");
	scanf("%d",&item);
	int start=0;
	int end=length-1;
	int mid;
	int flag=-1;
	
	while(start<=end){
		mid= (start+end)/2;
		if(arr[mid]>item){
			// chung to phan tu tim kiem nam o ben trai
			end= mid-1;
		}else if(arr[mid]<item){
			//chung to phan tu tim kiem nam o ben phai
			start= mid+1;
		}else{
			printf("Phan tu %d co vi tri la %d",item,mid);
			break;
		}
	}
	if(flag=-1){
		printf("Khong tim thay phan tu");
	}
}
