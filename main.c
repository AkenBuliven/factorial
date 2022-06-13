#include <stdio.h>


int main() {
    int fact;
    int k;
  scanf("%d", &k);
  if (k == 0) printf("1");
   else {
     fact = 1;
      for (int i = 1; i <= k; i++)
        fact = fact * i;
      printf("%d", fact);
    }
}