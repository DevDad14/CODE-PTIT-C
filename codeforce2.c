<<<<<<< HEAD
<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

void sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void sortnumber(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int num = a[i];
        int count = 0;
        while (num > 0) {
            num /= 10;
            count++;
        }

        int firstnum = a[i] / pow(10, count - 1);
        num = a[i];

        while (num > 0) {
            int digit2 = num % 10;
            if (firstnum < digit2) {
                int temp = firstnum;
                firstnum = digit2;
                digit2 = temp;
            }
            num /= 10;
        }

        a[i] = firstnum;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sortnumber(a, n);
    

    return 0;
}
=======
#include <stdio.h>
#include <math.h>

void sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void sortnumber(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int num = a[i];
        int count = 0;
        while (num > 0) {
            num /= 10;
            count++;
        }

        int firstnum = a[i] / pow(10, count - 1);
        num = a[i];

        while (num > 0) {
            int digit2 = num % 10;
            if (firstnum < digit2) {
                int temp = firstnum;
                firstnum = digit2;
                digit2 = temp;
            }
            num /= 10;
        }

        a[i] = firstnum;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sortnumber(a, n);
    

    return 0;
}
>>>>>>> 676aa6e (Add files via upload)
=======
#include <stdio.h>
#include <math.h>

void sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void sortnumber(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int num = a[i];
        int count = 0;
        while (num > 0) {
            num /= 10;
            count++;
        }

        int firstnum = a[i] / pow(10, count - 1);
        num = a[i];

        while (num > 0) {
            int digit2 = num % 10;
            if (firstnum < digit2) {
                int temp = firstnum;
                firstnum = digit2;
                digit2 = temp;
            }
            num /= 10;
        }

        a[i] = firstnum;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sortnumber(a, n);
    

    return 0;
}
>>>>>>> 4e93da1f93a3693c079c76996b357a601da2cf52
