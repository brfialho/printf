🌐 Available languages:
🇺🇸 English | 🇧🇷 [Português](README.pt.md)

---

# 🖨️ ft_printf

This was my **second project** in my 42 school journey.

The goal of this project is to recreate the well-known `printf` function from the C standard library.
It needs to behave similarly to the original function while handling memory, formatting, and conversion logic manually.

> ⚠️ **Note:**
> I chose **not** to implement the bonus part of the project due to time constraints.

---

## 📝 About the Project

`ft_printf` must parse a format string and print values according to different conversion specifiers.
The project requires handling:

* Characters (`%c`)
* Strings (`%s`)
* Pointers (`%p`)
* Signed integers (`%d`, `%i`)
* Unsigned integers (`%u`)
* Hexadecimal (lowercase & uppercase) (`%x`, `%X`)
* The literal percent sign (`%%`)

The idea is to understand:

* How variadic functions work (`<stdarg.h>`)
* How to manipulate strings and numbers manually
* How to write robust, modular C code without relying on standard printing functions

---

## 📦 Contents

* `ft_printf.c` — main function that manages parsing
* Helper files for each conversion type
* Utility functions for number/string handling
* A Makefile that builds the `libftprintf.a` library

---

## ⚡ Usage

### 1. Compile the library

```bash
make
```

This creates:

```
libftprintf.a
```

### 2. Include it in your C program

```c
#include "ft_printf.h"
```

### 3. Compile your project linking against it

```bash
cc main.c -L. -lftprintf
```
Or:

```bash
cc main.c path/to/libftprintf.a
```

### 4. Use it just like the real printf

```c
ft_printf("Hello %s, number: %d\n", "world", 42);
```

---