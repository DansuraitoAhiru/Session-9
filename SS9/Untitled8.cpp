#include <stdio.h>
#include <math.h>
int main(){
	int n,arr[100],i;
	int isPrime=1,sum=0;
	do{
		printf("Nhap so phan tu trong mang (1-100): ");
		scanf("%d", &n);
	}while(n<0 || n>100);
	for (i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("Cac so nguyen to trong mang la: ");
	for(i=0;i<n;i++){
		isPrime=1;
		if(arr[i]<2){
			isPrime=0;
		}else{
	      for(int j=2;j<=sqrt(arr[i]);j++){
			if(arr[i]%j==0){
				isPrime=0;
				break;
			}
		  }
		}
	    if(isPrime){
	    	printf("%d ", arr[i]);
	    	sum+=arr[i];
	    }
		}
	printf("\nTong cac so nguyen to trong mang la: %d", sum);
}
