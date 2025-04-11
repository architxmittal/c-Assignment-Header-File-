#ifndef HEADER_H
#define HEADER_H

int leap_year(int year) {
    if (year % 4 != 0) {
        return 0;
    } else if (year % 100 != 0) {
        return 1;
    } else if (year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

void reverse_array(int arr[], int size) {
    int i, temp;
    for (i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int strong_number(int num) {
    int original = num;
    int sum = 0;
    int digit, fact;
    
    while (num > 0) {
        digit = num % 10;
        fact = 1;
        
        while (digit > 0) {
            fact = fact * digit;
            digit--;
        }
        
        sum = sum + fact;
        num = num / 10;
    }
    
    if (sum == original) {
        return 1;
    } else {
        return 0;
    }
}

#endif
