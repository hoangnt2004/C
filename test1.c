#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int is_beautiful(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0 && is_prime(i) && num % (i * i) != 0) {
            return 0;
        }
    }
    return 1;
}

void list_beautiful_numbers(int a, int b) {
    for (int num = a; num <= b; num++) {
        if (is_beautiful(num)) {
            printf("%d ", num);
        }
    }
}

int main() {
    int a, b;
    printf("Enter the range (a b): ");
    scanf("%d %d", &a, &b);
    printf("Beautiful numbers in the range %d to %d:\n", a, b);
    list_beautiful_numbers(a, b);
    return 0;
}

