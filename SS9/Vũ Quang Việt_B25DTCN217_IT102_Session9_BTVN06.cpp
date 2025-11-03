#include <stdio.h>
int main(){
	int arr[100],n,x,i,count=0;
	do{
		printf("Nhap so phan tu trong mang (1-100): ");
		scanf("%d", &n);
	} while (n<1 || n>100);
	for(i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d", &arr[i]);
	}
	printf("Enter x: ");
	scanf("%d", &x);
	for(i=0;i<n;i++){
		if(x==arr[i]){
			printf("%d co xuat hien trong mang va o vi tri thu %d \n", x,i);
			count++;
		}
	}
	if(count==0){
			printf("%d ko xuat hien trong mang", x);
		}
}

