# Pass by Value and Pass by Reference in C:

Here is the code and explanation for a simple implementation of **pass by value** and **pass by reference**:

```c
#include <stdio.h>

void A(int value) {
    value = value + 1;
}

void B(int* valueRef) {         
    *valueRef = *valueRef + 1;  
}

int main(void) {
    int value;
    value = 7;
    printf("Initial value : %d\n\n", value);

    A(value);                // Pass by value - does not change the original 'value'
    printf("value AFTER A() call:\n");
    printf("%d\n", value);

    B(&value);               // Pass by reference - changes the original 'value'
    printf("value AFTER B() call:\n");
    printf("%d\n", value);

    return 0;
}
```

Function `A` receives a copy of the value `7` from the caller in `main`, which is stored on the stack. It is a ‘copy’ because it is independent from the original value in main. Inside function `A`, this copied value (`7`) is incremented by `1`. However, since the copy is local only to function `A`, the original value in `main` remains unchanged. Once function `A` exits, the local copy (now `8`) is deallocated.

Function `B`, on the other hand, is passed a pointer to the original value `7`. This allows function `B` to directly access and modify the original value stored in `main`. Function `B` uses a dereference (`*`) on the pointer to get at the value `7` in `main` and increment it by `1`. This change persists even after function `B` exits.
