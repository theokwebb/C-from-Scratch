# Pointers to Pointers and How Data is Stored in C:
Here is example that demonstrates the handling of pointers to pointers and how data is stored:

```c
#include <stdio.h>

void C(char** ptr)        // C takes as its parameter a pointer to a pointer
                          // *ptr is the original pointer in main
{
    char* cp = "ABCDE";
    *ptr = cp;            // Here we dereference *ptr and set it to what cp points to ("ABCDE")
                          // "ABCDE" is stored in the read-only data segment              
}

void D(char** ptr)
{
    char c[] = "FGHIJ";   // c is a local array stored on the stack
    *ptr = c;	          // *ptr is set to what c points to ("FGHIJ") but will be deallocated once D exits
}

int main(void)
{
    char* ptr = NULL;

    C(&ptr);              // Pass the address of ptr to function C
    printf("ptr's value AFTER C() call:\n%s\n", ptr);

    D(&ptr);
    printf("ptr's value AFTER D() call:\n%s\n", ptr); // Accesses deallocated memory - runtime error

    return 0;
}
```

After function `D`, `ptr` is not set to `FGHIJ` after `D` exits. This is because `FGHIJ` is stored on the stack within function `D` as a local array and will be deallocated once the function exits. It is local to only function `D`. So, after function `D` exits, `ptr` points to deallocated memory which would lead to an error if accessed. In contrast, in function `C`, the pointer `cp` is stored on the stack and points to the string `ABCDE` which is stored in the read-only data segment and can be accessed after the function exits. 
