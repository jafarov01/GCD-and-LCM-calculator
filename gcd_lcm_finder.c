#include <stdio.h>

int main() {

    int i, j, rem = 0, gcd = 0, lcm = 1, prod = 1;
    int arr[1000];
    int N, count = 0;
    int max = 0;

    printf("Enter the size of array: "); scanf_s("%d", &N);
    for (i = 0; i < N; i++) {
        printf("Enter the %d th number: ", (i + 1));
        scanf_s("%d", &arr[i]);
        prod *= arr[i];
    }
    for (i = 0; i < N; i++) {
        if (arr[max] < arr[i]) {
            max = i;
        }
    }

    for (i = 2; i < arr[max]; i++) {  //10 15 20 30
        count = 1;
        for (j = 0; j < N; j++) {
            rem = arr[j] % i;
            if (rem != 0) {
                count = 0;

            }

            if (count == 0) {
                j = j + N;

            }

        }
        if (rem == 0) {
            gcd = i;
        }


    }
    if (gcd == 0) {
        gcd = 1;
    }

    printf("GCD is %d\n", gcd);

    for (i = arr[max]; i < prod; i++) {  //30 40 50 60
        count = 1;
        for (j = 0; j < N; j++) {
            if (i % arr[j] != 0) {
                count = 0;
            }
            if (count == 0) {
                j = j + N;
            }
            else if (count == 1) {
                lcm = i;

            }
        }
        if (count == 1) {
            i = i + prod;
        }
    }
    printf("LCM is %d", lcm);
}
