#include <iostream>
using namespace std;

void result(int sum, int x) {
  printf("sum: %d %d\n", sum, x);
}

void loop() {
  int sum = 1;
  int x = 1;
  bool sumPrinted = false;
  for (int i = 1; sum < 100; i++) {
    printf("%d ", i);
    sum += i;
    x *= i;
    if ((i % 6) == 0) {
      result (sum,x);
      sumPrinted = true;
    } else {
      sumPrinted = false;
    }
  }
  if (!sumPrinted) {
      result (sum,x);
  }
}

int main() {
  printf("Hello world - x\n");
  loop();
  printf("Hello world\n");
}
