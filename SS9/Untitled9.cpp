#include <stdio.h>

int main() {
    int arr[] = {3,36,69,96,6969,35,36,36,36,69,896};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0, count;
    int mostFreq;
    
    for(int i = 0; i < n; i++) {
        count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        
        if(count > maxCount) {
            maxCount = count;
            mostFreq = arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la: %d", mostFreq);
}
