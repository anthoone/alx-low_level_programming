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

1. strncat

Prototype: char *_strncat(char *dest, char *src, int n);

This function is similar to _strcat, but it uses at most n bytes from src. src does not need to be null-terminated if it contains n or more bytes. It returns a pointer to the resulting string dest.
2. strncpy

Prototype: char *_strncpy(char *dest, char *src, int n);

This function copies a string. It works exactly like strncpy.
3. strcmp

Prototype: int _strcmp(char *s1, char *s2);

This function compares two strings. It works exactly like strcmp.
4. Reverse Array

Prototype: void reverse_array(int *a, int n);

This function reverses the content of an array of integers. n is the number of elements in the array.
5. string_toupper

Prototype: char *string_toupper(char *);

This function changes all lowercase letters of a string to uppercase.
6. cap_string

Prototype: char *cap_string(char *);

This function capitalizes all words of a string. Separators of words include space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.
7. leet

Prototype: char *leet(char *);

This function encodes a string into 1337. It replaces the following letters:

    a and A with 4
    e and E with 3
    o and O with 0
    t and T with 7
    l and L with 1

8. rot13

Prototype: char *rot13(char *);

This function encodes a string using rot13.
Project Structure

c

.
├── 0-strcat.c
├── 1-strncat.c
├── 2-strncpy.c
├── 3-strcmp.c
├── 4-rev_array.c
├── 5-string_toupper.c
├── 6-cap_string.c
├── 7-leet.c
├── 8-rot13.c
├── main.h
└── README.md

Usage

To compile and run the code:

bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file>.c -o <output>
./<output>

Replace <file> with the desired source file and <output> with the desired output name.
Contributing

    Fork the repository.
    Create your feature branch: git checkout -b my-new-feature.
    Commit your changes: git commit -am 'Add some feature'.
    Push to the branch: git push origin my-new-feature.
    Submit a pull request.

License

This project is licensed under the MIT License - see the LICENSE file for details.

For any inquiries or questions, feel free to reach out!
