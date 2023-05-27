#include <stdio.h>
#include <string.h>

void sapxep(char *arr[], int n) {
    int i, j;
    char *temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char* names[] = {"George", "Albert", "Tina", "Xavier", "Roger", "Tim", "William"};
    int length = sizeof(names) / sizeof(names[0]);

    sapxep(names, length);

    // In các tên đã được sắp xếp
    for (int i = 0; i < length; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
