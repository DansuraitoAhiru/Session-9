#include <stdio.h>
#include <math.h>
int main(){
	int arr[100],n,i,count=0,cnt=0;
	do {
        printf("Nhap so phan tu cua mang (1-100): ");
        scanf("%d", &n);
    } while(n < 1 || n > 100);
    for(i=0;i<n;i++){
    	printf("Nhap phan tu thu %d: ",i+1);
    	scanf("%d", &arr[i]);
    }
    printf("\nCac so chan trong mang la: ");
    for(i=0;i<n;i++){
    	if(arr[i]%2==0){
    		printf("%d ", arr[i]);
    		count++;
		}
	}
	printf("\nCac so le trong mang la: ");
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf("%d ", arr[i]);
			cnt++;
		}
	}
	printf("\nTong so chan = %d\n", count);
	printf("Tong so le= %d", cnt);
}
