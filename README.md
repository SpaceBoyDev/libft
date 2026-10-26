_This project has been created as part of the 42 curriculum by darmarti_

# libft

An implementation of the C standard library for 42's **libft** project.
The goal is to build a reusable static library containing character checks,
memory and string utilities, conversions, file-descriptor output functions
and, as a bonus, linked-list helpers.

## Contents

- **Mandatory part:** 34 functions declared in [`libft.h`](./libft.h).
- **Bonus part:** 9 functions for working with `t_list`.
- **Output:** `libft.a`, a static library with no external dependencies.
- **Compiler:** `cc` with `-Wall -Wextra -Werror`.

## Compilation

From the project root:

```sh
make          # Build the mandatory part and create libft.a
make bonus    # Build the bonus functions
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Run fclean and build again
```

To use the library in another program:

```sh
cc -Wall -Wextra -Werror main.c -I. -L. -lft
```

Include the project header in your source file:

```c
#include "libft.h"
```

## API

### Character checks

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`

### Memory and strings

`ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
`ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`,
`ft_memchr`, `ft_memcmp`, `ft_strnstr`, `ft_strdup`

### Conversion and allocation

`ft_toupper`, `ft_tolower`, `ft_atoi`, `ft_calloc`, `ft_itoa`

### Additional string operations

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`,
`ft_striteri`

### File-descriptor output

`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus: linked lists

The `t_list` structure contains a `content` pointer and a `next` pointer.

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,
`ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

The destruction functions receive a `del` callback to free each node's
content. `ft_lstmap` uses the same callback to clean up a partially built
list if an allocation fails.

## Organization

Each function is implemented in its own `.c` file. Declarations and the
definition of `t_list` are provided in [`libft.h`](./libft.h). The
[`Makefile`](./Makefile) separates mandatory and bonus sources and builds
the `libft.a` library.

## Project requirements

The code follows the usual libft constraints: custom implementations of the
requested functions, use of the project header, warning-free compilation
with `-Wall -Wextra -Werror`, and explicit management of dynamically
allocated memory.

## Resources

- [Official libft subject](https://cdn.intra.42.fr/pdf/pdf/41359/en.subject.pdf)
- The `man 3` and `man 2` pages for the corresponding libc functions
- [Norminette](https://github.com/42Paris/norminette) for style checks
