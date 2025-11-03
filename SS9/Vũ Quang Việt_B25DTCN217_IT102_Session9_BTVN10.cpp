#include <stdio.h>
int main() {
    int arr[] = {1, 6, 3, 3, 2, 6, 1, 2, 30, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count[100] = {0};
    int i, j, maxCount = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count[i]++;
            }
        }
        if(count[i] > maxCount){
            maxCount = count[i];
        }
    }

    printf("Cac phan tu xuat hien nhieu nhat la: ");
    for(i = 0; i < n; i++){
        int alreadyPrinted = 0;
        if(count[i] == maxCount){
            for(j = 0; j < i; j++){
                if(arr[j] == arr[i] && count[j] == maxCount){
                    alreadyPrinted = 1;
                    break;
                }
            }
            if(!alreadyPrinted){
                printf("%d ", arr[i]);
            }
        }
    }
}
