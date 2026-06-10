// Arrays
#include <stdio.h>

int main() {
    
    int arr[] = {2, 4, 8, 12, 16, 18};
    int g = sizeof(arr[5]);
    int n = sizeof(arr)/sizeof(arr[0]);
printf("%d\n",n);
    // Printing array elements
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}