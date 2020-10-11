#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int next_permutation(int *a, int n) {
    int i = n-1;
    while(i>0 && a[i-1] >= a[i])
        i -= 1;
    if(i<=0)
        return 0;
    int j = n-1;
    while(a[j] <= a[i-1])
        j -= 1;
    swap(&a[i-1],& a[j]);
    j = n-1;
    while(i<j) {
        swap(&a[i], &a[j]);
        i += 1;
        j -= 1;
    }
    return 1;
}
