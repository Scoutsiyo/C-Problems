# C-Problems

```c
#include <stdio.h>

void printNumberInWords(int num) {
    char *words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (num >= 0 && num <= 9) {
        printf("%d -> %s\n", num, words[num]);
    } else {
        printf("Número fuera de rango\n");
    }
}

int main() {
    int num;
    printf("Ingresa un número (0-9): ");
    scanf("%d", &num);
    
    printNumberInWords(num);

    return 0;
}
```

✅ **Salida para 5**:

```
5 -> five
```

✅ **Salida para 7**:

```
7 -> seven
```
