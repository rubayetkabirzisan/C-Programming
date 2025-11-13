#include <stdio.h>

/* Iterative binary search on a sorted (ascending) array.
    Returns index of target if found, otherwise -1. */
int binary_search(const int arr[], int n, int target) {
     int lo = 0, hi = n - 1;
     while (lo <= hi) {
          int mid = lo + (hi - lo) / 2;
          if (arr[mid] == target) return mid;
          if (arr[mid] < target) lo = mid + 1;
          else hi = mid - 1;
     }
     return -1;
}

int main(void) {
     int n;
     /* Input format:
         First line: n (number of elements)
         Next n values: sorted integers (ascending)
         Last value: target to search for
         Example:
         5
         1 3 5 7 9
         7
     */
     if (scanf("%d", &n) != 1 || n <= 0) return 0;
     int arr[n];
     for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);
     int target;
     if (scanf("%d", &target) != 1) return 0;

     int idx = binary_search(arr, n, target);
     if (idx >= 0)
          printf("%d\n", idx); /* prints 0-based index */
     else
          printf("-1\n");
     return 0;
}
