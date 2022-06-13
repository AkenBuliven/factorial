# factorial

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

Факториал. 

Для целого числа 
k
(
0
≤
k
≤
12
)
k(0≤k≤12) посчитать 
k
!
k!.
