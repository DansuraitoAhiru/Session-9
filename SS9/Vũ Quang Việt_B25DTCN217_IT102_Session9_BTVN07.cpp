#include <stdio.h>
int main(){
	int n, arr[100];
	int i,j,temp;
	do{
		printf("Nhap so phan tu cua mang (1-100): ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	i=0;
	j=n-1;
	while(i<j){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	
	printf("Mang sau khi dao nguoc la: ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}

