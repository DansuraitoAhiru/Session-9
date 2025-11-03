#include <stdio.h>
#include <math.h>
int main(){
	int arr[100],n, sum=0;
	float avg;
	printf("So phan tu trong mang la: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d", &arr[i]);
		sum+=arr[i];
		avg=sum/(n*1.0);
	}
	printf("Tong = %d \nGia tri trung binh cua cac phan tu trong mang la: %.2f",sum, avg);
}
