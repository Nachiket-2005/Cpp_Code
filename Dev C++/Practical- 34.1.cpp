#include <stdio.h>

int main(void) {
  int a[50], i, n, max;
  printf("\n Enter How many numbers you want to enter [Max 50] : ");
  scanf("%d", & n);
  for (i = 0; i < n; i++) {
    printf("\n Enter Value in Array at Position [%d] :", i + 1);
    scanf("%d", & a[i]);
    if (i == 0) {
      max = a[i];
    } else {
      if (max < a[i]) {
        max = a[i];
      }
    }
  }
  printf("\n Maximum Value in Array = %d", max);
  return 0;
}
