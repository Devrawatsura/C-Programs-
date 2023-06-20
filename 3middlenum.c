#include <stdio.h>

int main() {
   int a, b, c;

   printf("Enter three numbers: ");
   scanf("%d %d %d", &a, &b, &c);

   if (a < b &&  b < c) {
      printf("%d is the middle number.", b);
   }
   else if (a > c && b  < c) {
      printf("%d is the middle number.", c);
   }
   else {
      printf("%d is the middle number.", a);
   }

   return 0;
}
