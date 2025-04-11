//Name-ARCHIT MITTAL
//SECTION-AF
//ROLL NO.-2415000317(13)


#include <stdio.h>
#include "header.h"

int main() {
    int choice, year, number, size, i;
    
    printf("Choose operation:\n");
    printf("1. Check leap year\n");
    printf("2. Reverse an array\n");
    printf("3. Check strong number\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    
    if (choice == 1) {

        printf("Enter a year: ");
        scanf("%d", &year);
        
        if (is_leap_year(year)) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }
    }
    else if (choice == 2) {
        printf("Enter size of array: ");
        scanf("%d", &size);
        
        int arr[size];
        printf("Enter %d numbers: ", size);
        for (i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }
        reverse_array(arr, size);
        printf("Reversed array: ");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else if (choice == 3) {
        printf("Enter a number: ");
        scanf("%d", &number);
        
        if (is_strong_number(number)) {
            printf("%d is a strong number.\n", number);
        } else {
            printf("%d is not a strong number.\n", number);
        }
    }
    else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}
