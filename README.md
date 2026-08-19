*This project has been created as part of the 42 curriculum by serozdem.*

# Libft

## Description

This project consists of recoding a set of functions from the C
standard library, plus some additional utility functions and a linked
list library. The goal was to understand how these functions work
internally by reimplementing them myself, and to build a library that
will be useful for my future 42 projects.

Libft is made of three parts:

- **Part 1 - Libc functions:** reimplementations of standard libc
  functions such as `ft_strlen`, `ft_memcpy`, `ft_memmove`,
  `ft_strlcpy`, `ft_strlcat`, `ft_atoi`, `ft_calloc`, `ft_strdup`, etc.
- **Part 2 - Additional functions:** functions that don't exist in the
  libc, or exist in a different form, such as `ft_split`, `ft_strjoin`,
  `ft_strtrim`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, and the
  `_fd` functions (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`,
  `ft_putnbr_fd`).
- **Part 3 - Linked list:** a small linked list library built around
  the `t_list` structure, with functions like `ft_lstnew`,
  `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`,
  `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and `ft_lstmap`.

## Instructions

```bash
make        # to create libft.a
make clean  # to delete .o files
make fclean # to delete .o files and libft.a
make re     # fclean + make
```

To use the library in another project:

First create the library:
```bash
make
```

Include the header in your file:
```c
#include "libft.h"
```

Compile your file:
```bash
cc file.c libft.a
```

## Resources

- C man pages (to check the exact behaviour of the original functions,
  like `strlen`, `memcpy`, `calloc`, etc.)
- 42 subject PDF
- 42 norm PDF

**AI usage:** I wrote the functions myself, and used AI mainly as a
support tool along the way. When I got stuck on a compiler error, I
asked AI to help me understand what the error meant and where it was
coming from, without asking for the fix directly. For the memory
functions (`ft_memcpy`, `ft_memmove`, `ft_calloc`, etc.), I used AI to
help me understand tricky edge cases, like why `memmove` needs to
handle overlapping memory differently from `memcpy`. Whenever I didn't
understand a part of the subject, I asked AI to explain it to me in
simpler terms before writing any code for it. Once my code was done, I
used AI for help writing this README.
