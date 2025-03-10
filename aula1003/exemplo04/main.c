#include <stdio.h>

int main(void) {
    for (int i = 1; i<=10; i++){
      if (i % 5 == 0) continue;
      printf("%d\n", i);
    }

    for (int i = 1; i<50; i+=2){
      printf("%d \n", i);
    }
    return 0;
}