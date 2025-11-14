
---

# 🖨️ ft_printf

Este foi o meu **segundo projeto** na minha jornada na 42.

O objetivo deste projeto é recriar a conhecida função `printf` da biblioteca padrão do C.
Ela precisa se comportar de forma semelhante à função original, lidando manualmente com memória, formatação e lógica de conversão.

> ⚠️ **Nota:**
> Eu escolhi **não** implementar a parte bônus do projeto por questões de tempo.

---

## 📝 Sobre o Projeto

O `ft_printf` deve analisar uma *format string* e imprimir valores de acordo com diferentes especificadores de conversão.
O projeto exige tratar:

* Caracteres (`%c`)
* Strings (`%s`)
* Ponteiros (`%p`)
* Inteiros assinados (`%d`, `%i`)
* Inteiros não assinados (`%u`)
* Hexadecimal (minúsculo e maiúsculo) (`%x`, `%X`)
* O caractere percentual literal (`%%`)

A ideia é compreender:

* Como funções variádicas funcionam (`<stdarg.h>`)
* Como manipular strings e números manualmente

---

## 📦 Conteúdo

* `ft_printf.c` — função main
* Arquivos utils
* Um Makefile que compila a biblioteca `libftprintf.a`

---

## ⚡ Uso

### 1. Compile a biblioteca

```bash
make
```

Isso gera:

```
libftprintf.a
```

### 2. Inclua no seu programa em C

```c
#include "ft_printf.h"
```

### 3. Compile seu projeto linkando com a biblioteca

```bash
cc main.c -L. -lftprintf
```

Ou:

```bash
cc main.c path/to/libftprintf.a
```

### 4. Use como o printf real

```c
ft_printf("Hello %s, number: %d\n", "world", 42);
```

---