# 0x05. C - Pointers, Arrays, and Strings

![Project Logo](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/216/IMG_2410.JPG)


## Concepts

For this project, we expect you to look at these concepts:

- **Struggling with the sandbox? Try this:** Using Docker & WSL on your local host
- **Pointers and arrays**
- **Data Structures**

## Learning Objectives

![Gift Task](https://i.giphy.com/media/v1.Y2lkPTc5MGI3NjExemJxYTJvYjdoNWtvODd3eXdtc3A2ZW02bDBkMzlkdmxkNXFkaWIxeCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/GwtfUx2P2HnvByDZdg/giphy.gif)

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## Tasks

### 0. 98 Battery st.
**Mandatory**

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

**Prototype:** `void reset_to_98(int *n);`

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `0-reset_to_98.c`

---

### 1. Don't swap horses in crossing a stream
**Mandatory**

Write a function that swaps the values of two integers.

**Prototype:** `void swap_int(int *a, int *b);`

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `1-swap.c`

---

### 2. This report, by its very length, defends itself against the risk of being read
**Mandatory**

Write a function that returns the length of a string.

**Prototype:** `int _strlen(char *s);`

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `2-strlen.c`

---

### 3. I do not fear computers. I fear the lack of them
**Mandatory**

Write a function that prints a string, followed by a new line, to stdout.

**Prototype:** `void _puts(char *str);`

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `3-puts.c`

---

### 4. I can only go one way. I've not got a reverse gear
**Mandatory**

Write a function that prints a string, in reverse, followed by a new line.

**Prototype:** `void print_rev(char *s);`

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `4-print_rev.c`

---

### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
**Mandatory**

Write a function that reverses a string.

**Prototype:** `void rev_string(char *s);`

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `5-rev_string.c`

---

### 6. Half the lies they tell about me aren't true
**Mandatory**

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

**Prototype:** `void puts2(char *str);`

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `6-puts2.c`

---

### 7. Winning is only half of it. Having fun is the other half
**Mandatory**

Write a function that prints half of a string, followed by a new line.

**Prototype:** `void puts_half(char *str);`
- The function should print the second half of the string
- If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `7-puts_half.c`

---

### 8. Arrays are not pointers
**Mandatory**

Write a function that prints n elements of an array of integers, followed by a new line.

**Prototype:** `void print_array(int *a, int n);`
- Numbers must be separated by comma, followed by a space
- The numbers should be displayed in the same order as they are stored in the array
- You are allowed to use `printf`

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `8-print_array.c`

---

### 9. strcpy
**Mandatory**

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

**Prototype:** `char *_strcpy(char *dest, char *src);`

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `9-strcpy.c`

---

### 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
**Mandatory**

Write a function that convert a string to an integer.

**Prototype:** `int _atoi(char *s);`
- The number in the string can be preceded by an infinite number of characters
- You need to take into account all the - and + signs before the number
- If there are no numbers in the string, the function must return 0
- You are not allowed to use `long`
- You are not allowed to declare new variables of “type” array
- You are not allowed to hard-code special values
- We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code.

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `100-atoi.c`

---

### 11. Don't hate the hacker, hate the code
**Advanced**

Create a program that generates random valid passwords for the program 101-crackme.

**Repo:**

- **GitHub repository:** `alx-low_level_programming`
- **Directory:** `0x05-pointers_arrays_strings`
- **File:** `101-keygen.c`

---

## Author

- **GitHub:** [anthoone](https://github.com/anthoone)
- **Email:** [david.anthone49@gmail.com](mailto:david.anthone49@gmail.com)

