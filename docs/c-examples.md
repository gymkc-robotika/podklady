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
