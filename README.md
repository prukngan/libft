# libft — Custom C Standard Library

This repository contains **`libft`**, a custom implementation of selected functions from the C standard library, developed as part of the **42 Bangkok curriculum**.

The goal of this project was to build a personal library of fundamental C functions from scratch, reinforcing core concepts of programming, memory management, and defensive coding.

## Objective

Reimplement commonly used C library functions to:

- Deepen understanding of pointers and memory manipulation
- Practice string and character handling
- Build reusable, well-tested utility functions
- Learn to write robust and consistent C code

## Contents

The library includes custom implementations of:

### Character and String Functions
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`

### Memory Functions
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

### Conversion and Output Utilities
- `ft_atoi`, `ft_itoa`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### List (Linked List) Functions
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Features

- Clean and consistent API design
- Manual memory management using `malloc` and `free`
- Designed for reuse in future C projects
- Thoroughly tested in 42 school environment

## How to Use

1. Clone the repository
2. Run `make` to build `libft.a`
3. Link the library into your C projects
4. Include the header with `#include "libft.h"`

## Tech Stack

- Language: C
- Standard: GCC / Unix environment
- Tools: Makefile, static library (`ar`), custom test cases

## Purpose

This library forms a foundational part of my C programming skill set and reinforces best practices for building reusable, efficient, and well-tested code.

It’s intended to be used as a base for future projects requiring basic utility functions in C.

## Author

Former 42 Bangkok student with a Computer Engineering background.  
Interested in embedded systems, low-level software, and systems programming.