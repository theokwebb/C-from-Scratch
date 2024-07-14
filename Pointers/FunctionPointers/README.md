# Function Pointers in C

Here is the code explanation for a simple command handler (`CommandHandler.c`) which demonstrates the use of function pointers:

## Declaration:
On line 7, we declare the function pointer `funcptr` with `typedef`:
```c
typedef void (*funcptr)(void);
```

`*` indicates that `funcptr` is a pointer. However, the function-call operator `()` holds higher precedence than the pointer operator `*`. Therefore, we need to override it with extra parentheses around `*funcptr` to specify that it is a pointer to a function which returns void.

`funcptr` by default takes no arguments. It could, however, be easily modified to take two integers as arguments, like so:
```c
typedef void (*funcptr)(int, int);
```

In the `commandStruct` structure, the `execute` field is set to type `funcptr`.

## Assignment:
In the `commands` array, the `execute` field is assigned the addresses of the `Help` and `Create` functions.

Note that `{"help", "Help menu", Help}` could be written as `{"help", "Help menu", &Help}` but in C, the name of a function naturally represents a pointer to the function, so the `&` operator is unnecessary, similar to how arrays are treated.

## Function Calls via Pointers:
Finally, in `CommandHandler`, we call the function to which the pointer refers:
```c
(*commands[i].execute)();
```

Here we dereference (`*`) the pointer `execute` to obtain the function it points to and call it. So, like before, the extra parentheses around `*commands[i].execute` are used for the same reason as they were in the declaration of `funcptr`. That being said, the function can also be called with just: 
```c
commands[i].execute();
```

This is because if you use a function pointer with a call operation `()`, it is clear to the compiler from the context that you intend to call a function. Besides assigning, comparing, or directly calling function pointers, there are no other operations you can perform on them, so the compiler can easily understand the intended action.
