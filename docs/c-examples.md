Základy
=======

```
int main() {
  printf("Hello world\n");
}
```

```
void loop() {
  for (int i = 0; i < 10; i++) {
    printf("%d ", i);
  }
}

int main() {
  loop();
  printf("Hello world\n");
}
```

```
void loop() {
  for (int i = 0; i < 10; i++) {
    printf("%d ", i);
    if ((i % 3) == 0) printf("\n");
  }
}

int main() {
  loop();
  printf("Hello world\n");
}
```

```
void loop() {
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    printf("%d ", i);
    sum += i;
    if ((i % 3) == 0) printf("sum: %d\n", sum);
  }
}

int main() {
  loop();
  printf("Hello world\n");
}
```

```
#include <iostream>
using namespace std;

bool IsPrime (int x){
  for (int div = 2; div < x ; div ++) {
    if (x % div == 0) return false;
  }
  return true;
}

void printInt(int i) {
  printf("%d\n", i);
}


void loop() {
  for (int i = 0; i <= 1000; i++) {
    if (IsPrime(i)) {
      printInt(i);
    }
  }
  
}

int main() {
  loop();
}

```