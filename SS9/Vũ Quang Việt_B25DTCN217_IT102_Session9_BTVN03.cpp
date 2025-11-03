#include <stdio.h>
int main(){
	int arr[100],n,i;
	printf("So phan tu trong mang la: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);	
	}
	printf("Toan bo phan tu trong mang la: ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}

