#include <stdio.h>

int main() {
    int n, i, roll, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int rolls[n];

    printf("Enter roll numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &rolls[i]);
    }

    // Check for roll number 100
    for(i = 0; i < n; i++) {
        if(rolls[i] == 100) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("Roll number 100 is present.\n");
    } else {
        printf("Roll number 100 is NOT present.\n");
    }

    return 0;
}

