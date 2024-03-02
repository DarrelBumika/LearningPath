#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};

    printf("Data ke-3: %d\n", array[2]);

    for(int i = 0; i <= 5; i++) {
        printf("Data ke-%d: %d\n", i + 1, array[i]);
    }
}