# ft_printf

A simple implementation of the `printf` function in C.

## Table of Contents

- [Introduction](#introduction)
- [Format Specifiers](#format-specifiers)
- [Building and Running](#building-and-running)
- [Contributing](#contributing)

## Introduction

This project provides a basic implementation of the `printf` function in C, named `ft_printf`. It supports a subset of format specifiers commonly used in the standard `printf` function.

# Format Specifiers in C

This repository provides a quick reference guide for format specifiers in the C programming language. Format specifiers are used in functions like `printf` and `scanf` to specify the type and format of data that is being input or output.

## Format Specifiers

- `%d` or `%i`: Signed decimal integer
- `%u`: Unsigned decimal integer
- `%x`: Unsigned hexadecimal integer (lowercase)
- `%X`: Unsigned hexadecimal integer (uppercase)
- `%s`: String of characters
- `%c`: Character
- `%p`: Pointer address
- Any other character is printed as is.
```c
#include <stdio.h>

int main() {
    ft_printf("This is a simple %%s with a number: %%d\n", "example", 123);
    // Output: This is a simple %s with a number: %d

    ft_printf("Hexadecimal: %%x, Uppercase Hex: %%X\n", 255, 255);
    // Output: Hexadecimal: %x, Uppercase Hex: %X

    return 0;
}
```
## Building and Running

To build the project, you can use your preferred build system. For example, with CC:

```bash
cc ft_printf.c libftprintf.a
```

Then, run the executable:
```bash
./a.out
```
make sure that u already run `make` and `make clean`

## Contributing

Feel free to contribute to this project by submitting issues or pull requests. All contributions are welcome!
