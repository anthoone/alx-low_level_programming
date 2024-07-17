# 0x06. C - More Pointers, Arrays, and Strings

![C Programming](https://img.shields.io/badge/C-Programming-blue) ![ALX Projects](https://img.shields.io/badge/ALX-Projects-red)

Welcome to the **0x06. C - More Pointers, Arrays, and Strings** project! This project is part of the ALX Low-Level Programming curriculum, focusing on advanced concepts of pointers, arrays, and strings in C programming. Let's dive in!

## Table of Contents

- [General](#general)
- [Requirements](#requirements)
- [Tasks](#tasks)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

---

## General

In this project, you will learn:

- What pointers are and how to use them
- What arrays are and how to use them
- The differences between pointers and arrays
- How to use strings and manipulate them
- The scope of variables

## Requirements

- **Editors:** vi, vim, emacs
- **Compilation:** Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Code Style:** Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- **Restrictions:**
  - No global variables
  - No more than 5 functions per file
  - No use of standard library functions (e.g., `printf`, `puts`, etc.)
  - Allowed to use `_putchar`
  - Must include a `README.md` file

---

## Tasks

### 0. `strcat`

**Prototype:** `char *_strcat(char *dest, char *src);`

This function concatenates two strings. It appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte. It returns a pointer to the resulting string `dest`.

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
```
---

### 1. `strncat`

- **Prototype:** `char *_strncat(char *dest, char *src, int n);`
- The `_strncat` function is similar to the `_strcat` function, except that
    it will use at most n bytes from `src`; and
    `src` does not need to be null-terminated if it contains n or more   bytes
- Return a pointer to the resulting string `dest`

> **Alert:** FYI: The standard library provides a similar function: `strncat`. Run man `strncat` to learn more.

```c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

```

---
